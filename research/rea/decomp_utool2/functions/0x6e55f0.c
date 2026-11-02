// rea decompile_all
// name: FUN_006e55f0
// address: 0x6e55f0
// body: available
// range: 0x6e55f0-0x6e57c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_006e55f0(int *param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  bool bVar5;
  int aiStack_54 [2];
  int *local_4c;
  int local_34;
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728704;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar5 = false;
  iVar2 = FUN_0044ec90();
  iVar3 = FUN_00693140();
  if (iVar2 == iVar3) {
    local_4c = (int *)0x6e5647;
    piVar4 = (int *)FUN_006e50e0();
    bVar5 = true;
    if (*piVar4 != *param_1) {
      local_4c = (int *)*piVar4;
      aiStack_54[1] = 0x6e5668;
      iVar2 = FUN_00448730();
      if (iVar2 != 0) goto LAB_006e5681;
    }
    if (*(char *)(in_ECX + 0xa2) == '\0') {
      bVar1 = false;
      goto LAB_006e5685;
    }
  }
LAB_006e5681:
  bVar1 = true;
LAB_006e5685:
  if ((bVar5) && (piVar4 = (int *)(local_34 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      local_4c = (int *)0x6e56ab;
      FID_conflict__free(piVar4);
    }
  }
  if (bVar1) {
    local_1c[0] = *param_1;
    piVar4 = (int *)(local_1c[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    local_8 = 0;
    local_4c = (int *)0x6e56e7;
    (**(code **)(**(int **)(in_ECX + 0x134) + 8))();
    local_8 = 0xffffffff;
    local_4c = local_1c;
    aiStack_54[1] = 0x6e56fa;
    (**(code **)(PTR_vftable_00c7ed4c + 0x54))();
    iVar2 = *(int *)(in_ECX + 0x110);
    iVar3 = FUN_00693140();
    local_4c = (int *)0x6e5717;
    FUN_00693e20();
    local_4c = (int *)0x0;
    aiStack_54[0] = 0;
    FUN_006e8e70(aiStack_54 + 1,0x1000201);
    aiStack_54[0] = in_ECX + 0x108;
    FUN_00693b10(param_1,0);
    if ((iVar3 <= iVar2) && (*(char *)(in_ECX + 0x96) == '\0')) {
      iVar2 = FUN_00693140();
    }
    aiStack_54[1] = 0x6e5765;
    local_4c = (int *)iVar2;
    FUN_00696020();
    if (param_2 != '\0') {
      FUN_00696830();
    }
    FUN_00696340();
    FUN_00696170();
    FUN_00639860();
    *(undefined1 *)(in_ECX + 0xa2) = 0;
    FUN_006e6400(aiStack_54);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

