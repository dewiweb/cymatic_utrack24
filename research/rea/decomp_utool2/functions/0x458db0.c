// rea decompile_all
// name: FUN_00458db0
// address: 0x458db0
// body: available
// range: 0x458db0-0x458e7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00458db0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00700651;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  local_8 = 0;
  uStack_7 = 0;
  in_ECX[2] = param_1[2];
  FUN_00418510(param_1[2]);
  local_14 = 0;
  if (0 < in_ECX[2]) {
    iVar5 = 0;
    do {
      piVar6 = (int *)(*in_ECX + iVar5);
      if (piVar6 != (int *)0x0) {
        iVar1 = *(int *)(*param_1 + iVar5);
        iVar4 = *param_1 + iVar5;
        *piVar6 = iVar1;
        piVar3 = (int *)(iVar1 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        local_8 = 2;
        piVar3 = *(int **)(iVar4 + 8);
        piVar6[2] = (int)piVar3;
        (**(code **)(*piVar3 + 0x58))(piVar6 + 4,iVar4 + 0x10,uVar2);
      }
      local_14 = local_14 + 1;
      iVar5 = iVar5 + 0x18;
    } while (local_14 < in_ECX[2]);
  }
  ExceptionList = local_10;
  return;
}

