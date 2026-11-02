// rea decompile_all
// name: FUN_006f11d0
// address: 0x6f11d0
// body: available
// range: 0x6f11d0-0x6f1415 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f11d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *extraout_ECX;
  int iVar3;
  void **ppvStack_64;
  int iStack_60;
  int *piStack_5c;
  uint uStack_58;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007297c9;
  local_10 = ExceptionList;
  uStack_58 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piStack_5c = (int *)(*(int *)(in_ECX + 0x2f4) + 0x14);
  piVar1 = (int *)(*(int *)(*(int *)(in_ECX + 0x2f4) + 0x18) + 0xc);
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar3 != 0) {
    iVar3 = *piStack_5c;
    piStack_5c = (int *)0x6f1216;
    (**(code **)(iVar3 + 4))();
    piStack_5c = extraout_ECX;
  }
  iStack_60 = 0;
  ppvStack_64 = (void **)0x1004500;
  FUN_006e8e70(&piStack_5c);
  iStack_60 = 0x6f1232;
  FUN_00684a80();
  piStack_5c = *(int **)(in_ECX + 0x204);
  local_18 = 7.00649e-45;
  if (*(char *)(in_ECX + 0xa6) != '\0') {
    local_18 = 4.90454e-44;
  }
  iStack_60 = *(int *)(in_ECX + 0x100) - (int)local_18;
  ppvStack_64 = (void **)0x0;
  FUN_00472d90();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    piStack_5c = (int *)0x6f1278;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  piStack_5c = local_48;
  iStack_60 = 0x6f1283;
  (**(code **)(*(int *)*param_1 + 0x14))();
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    iStack_60 = 0x6f1294;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  iStack_60 = in_ECX + 0x80;
  ppvStack_64 = (void **)0x6f12a2;
  (**(code **)(*(int *)*param_1 + 0x68))();
  ppvStack_64 = (void **)&local_38;
  FUN_0067faa0();
  iVar2 = local_34 / *(int *)(in_ECX + 0x90);
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  local_28 = (void *)0x0;
  iVar2 = (local_2c + local_34) / *(int *)(in_ECX + 0x90) + 1;
  local_24 = 0;
  local_20 = 0;
  local_14 = *(int *)(in_ECX + 0x318);
  if (iVar2 < *(int *)(in_ECX + 0x318)) {
    local_14 = iVar2;
  }
  local_1c = local_38 + local_30;
  local_18 = (float)((double)(int)local_18 -
                    (double)*(float *)(in_ECX + 0x8c) * *(double *)(in_ECX + 0xa8));
  local_8 = 0;
  iVar2 = iVar3;
  if (iVar3 < local_14) {
    do {
      ppvStack_64 = *(void ***)(in_ECX + 0x8c);
      FUN_004b48c0(&local_28,*(int *)(in_ECX + 0x90) * iVar2,*(int *)(in_ECX + 0x90));
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_14);
  }
  iVar2 = local_1c;
  FUN_006e8e70(&ppvStack_64,0x1004502,0);
  FUN_00684c50();
  ppvStack_64 = &local_28;
  (**(code **)(*(int *)*param_1 + 0x58))();
  local_8 = 0xffffffff;
  FID_conflict__free(local_28);
  if (iVar3 < local_14) {
    do {
      FUN_004b4950(in_ECX,param_1,in_ECX + 0x80,(float)iVar2,local_18,
                   *(int *)(in_ECX + 0x90) * iVar3,*(int *)(in_ECX + 0x90),
                   *(undefined4 *)(in_ECX + 0x8c));
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_14);
  }
  ExceptionList = local_10;
  return;
}

