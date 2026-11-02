// rea decompile_all
// name: FUN_00433260
// address: 0x433260
// body: available
// range: 0x433260-0x433328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00433260(void)

{
  int iVar1;
  int iVar2;
  void **ppvVar3;
  uint uVar4;
  int *in_ECX;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fe1f6;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = in_ECX[2];
  ppvVar3 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar3, 0 < iVar2) {
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + -1;
    iVar2 = *(int *)(*in_ECX + (iVar2 + -1) * 4);
    if (iVar2 != 0) {
      local_8 = 0;
      piVar5 = *(int **)(iVar2 + 0x30);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x48))(piVar5,uVar4);
        (**(code **)(**(int **)(iVar2 + 0x30) + 8))(*(int **)(iVar2 + 0x30));
        *(undefined4 *)(iVar2 + 0x30) = 0;
      }
      piVar5 = *(int **)(iVar2 + 0x2c);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(undefined4 *)(iVar2 + 0x2c) = 0;
      }
      piVar5 = (int *)(*(int *)(iVar2 + 8) + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_8 = 0xffffffff;
      FUN_004bfe14(iVar2,0x44);
    }
    ppvVar3 = ExceptionList;
    iVar2 = in_ECX[2];
  }
  ExceptionList = local_10;
  return;
}

