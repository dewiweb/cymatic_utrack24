// rea decompile_all
// name: FUN_005ff200
// address: 0x5ff200
// body: available
// range: 0x5ff200-0x5ff2d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ff200(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  int local_8;
  
  iVar5 = in_ECX[4];
  if (iVar5 != 0) {
    FUN_004c1df0(*in_ECX,*in_ECX + iVar5 * 4,(((uint)(in_ECX[3] != 0) - iVar5) + in_ECX[2]) * 4);
    in_ECX[4] = 0;
    in_ECX[2] = in_ECX[2] - iVar5;
  }
  iVar5 = in_ECX[3];
  local_8 = (in_ECX[1] - in_ECX[2]) * 4 - iVar5;
  if (local_8 == 0) {
    return 0;
  }
  iVar3 = *in_ECX;
  iVar2 = in_ECX[2] * 4;
  if (iVar5 != 0) {
    uVar6 = *(uint *)(iVar2 + iVar3);
    *(uint *)(iVar2 + iVar3) =
         uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  }
  iVar5 = (*(code *)in_ECX[8])(iVar2 + iVar3 + iVar5,&local_8,in_ECX[9]);
  if (iVar5 == 0) {
    return 0;
  }
  uVar6 = in_ECX[2];
  iVar2 = in_ECX[3];
  iVar5 = uVar6 * 4;
  for (; uVar6 < (uint)(iVar2 + 3 + local_8 + iVar5) >> 2; uVar6 = uVar6 + 1) {
    puVar1 = (uint *)(*in_ECX + uVar6 * 4);
    uVar4 = *puVar1;
    *puVar1 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  }
  uVar6 = local_8 + in_ECX[2] * 4 + in_ECX[3];
  in_ECX[2] = uVar6 >> 2;
  in_ECX[3] = uVar6 & 3;
  return 1;
}

