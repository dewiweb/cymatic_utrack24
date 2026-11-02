// rea decompile_all
// name: FUN_0068f1c0
// address: 0x68f1c0
// body: available
// range: 0x68f1c0-0x68f409 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0068f1c0(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  char *extraout_EDX;
  int *piVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined4 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 8))(&local_14,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  pcVar6 = local_14;
  if (*local_14 == '\0') {
LAB_0068f3d4:
    puVar3 = (undefined4 *)0x0;
    local_14 = pcVar6;
  }
  else {
    if ((in_ECX[0xd] & 3U) == 0) {
      if ((in_ECX[1] == 0) || (*(char *)(in_ECX[1] + 0xac) == '\0')) goto LAB_0068f223;
LAB_0068f286:
      if ((in_ECX[1] != 0) &&
         ((*(char *)(in_ECX[1] + 0xac) != '\0' &&
          (cVar2 = FUN_00690600(), pcVar6 = extraout_EDX, cVar2 != '\0')))) goto LAB_0068f3d4;
      puVar3 = operator_new(0x10);
      local_8._0_1_ = 1;
      puVar4 = puVar3 + 3;
      *puVar3 = 0;
      puVar7 = &DAT_00c05a64;
      puVar3[1] = 0;
      puVar3[2] = 0;
      local_18 = puVar3;
      FUN_0061f730(puVar4,&DAT_00c05a64);
      FUN_0061fa00(puVar4,puVar7);
      local_8 = (uint)local_8._1_3_ << 8;
      iVar1 = in_ECX[5];
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        puVar4 = (undefined4 *)FUN_0068f1c0(1);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = puVar3[1];
          puVar3[1] = puVar4;
        }
      }
    }
    else {
      if ((in_ECX[0xd] & 3U) == 2) goto LAB_0068f286;
LAB_0068f223:
      if ((in_ECX[1] != 0) && (*(char *)(in_ECX[1] + 0xac) == '\0')) goto LAB_0068f3d4;
      puVar3 = operator_new(0x10);
      local_8._0_1_ = 2;
      puVar4 = puVar3 + 3;
      *puVar3 = 0;
      pcVar6 = "CLOSED";
      puVar3[1] = 0;
      puVar3[2] = 0;
      local_18 = puVar3;
      FUN_0061f730(puVar4,"CLOSED");
      FUN_0061fa00(puVar4,pcVar6);
      local_8 = (uint)local_8._1_3_ << 8;
    }
    if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff24) &&
       (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
      DAT_00cfff50 = 0;
      _DAT_00cfff54 = 0;
      _DAT_00cfff58 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
      _DAT_00cfff74 = 0;
      _atexit((_func_4879 *)&LAB_0072a350);
      FUN_004c0352(&DAT_00cfff24);
    }
    FUN_0061fa00(&local_18,&DAT_00c05a70);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_00634ca0(&local_18,&local_14);
    piVar5 = local_18 + -2;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return puVar3;
}

