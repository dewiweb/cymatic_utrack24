// rea decompile_all
// name: FUN_0051c380
// address: 0x51c380
// body: available
// range: 0x51c380-0x51c40a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051c380(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    bVar6 = *(int *)(in_ECX + 0x14) != 0;
    do {
      if (bVar6) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + uVar5 * 4);
      }
      else {
        iVar4 = 0;
      }
      if ((*(uint *)(iVar4 + 0x40) & 0x2000) == 0) {
        if (*(int *)(iVar4 + 0x60) == 1) {
          iVar2 = param_1[2];
          iVar3 = iVar2 + 1;
          if (param_1[1] < iVar3) {
            if (iVar3 < 0) {
              iVar3 = iVar2 + 2;
            }
            FUN_00409cf0((iVar3 >> 1) + iVar2 + 9 & 0xfffffff8);
          }
          iVar2 = param_1[2];
          param_1[2] = iVar2 + 1;
          piVar1 = (int *)(*param_1 + iVar2 * 4);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar4;
          }
        }
      }
      else {
        FUN_0051c380(param_1);
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < *(uint *)(in_ECX + 0x14);
    } while ((int)uVar5 < (int)*(uint *)(in_ECX + 0x14));
  }
  return;
}

