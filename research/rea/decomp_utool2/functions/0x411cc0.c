// rea decompile_all
// name: FUN_00411cc0
// address: 0x411cc0
// body: available
// range: 0x411cc0-0x411d91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00411cc0(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int in_EDX;
  int iVar7;
  undefined8 local_20;
  int local_14;
  uint local_10;
  int local_c;
  
  local_10 = in_EDX - in_ECX >> 3;
  if ((1 < (int)local_10) && (iVar7 = (int)(local_10 - (in_EDX - in_ECX >> 0x1f)) >> 1, 0 < iVar7))
  {
    local_14 = local_10 - 1;
    local_c = local_14 / 2;
    do {
      local_20 = *(undefined8 *)(in_ECX + -8 + iVar7 * 8);
      iVar7 = iVar7 + -1;
      iVar4 = iVar7;
      while (iVar4 < local_c) {
        iVar1 = iVar4 * 2 + 2;
        dVar2 = *(double *)(in_ECX + iVar1 * 8);
        dVar3 = *(double *)(in_ECX + -8 + iVar1 * 8);
        if (dVar3 <= dVar2) {
          uVar6 = (uint)(dVar3 < dVar2);
        }
        else {
          uVar6 = 0xffffffff;
        }
        iVar5 = iVar4 * 2 + 1;
        if (-1 < (int)uVar6) {
          iVar5 = iVar1;
        }
        *(undefined8 *)(in_ECX + iVar4 * 8) = *(undefined8 *)(in_ECX + iVar5 * 8);
        iVar4 = iVar5;
      }
      if ((iVar4 == local_c) && ((local_10 & 1) == 0)) {
        *(undefined8 *)(in_ECX + iVar4 * 8) = *(undefined8 *)(in_ECX + -8 + local_10 * 8);
      }
      FUN_00412110(iVar7,&local_20,local_c);
    } while (0 < iVar7);
  }
  return;
}

