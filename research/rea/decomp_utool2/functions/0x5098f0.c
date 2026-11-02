// rea decompile_all
// name: FUN_005098f0
// address: 0x5098f0
// body: available
// range: 0x5098f0-0x509abe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005098f0(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  float10 fVar7;
  float in_XMM0_Da;
  float fVar8;
  undefined1 auStack_54 [8];
  undefined4 uStack_4c;
  int iStack_28;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007082d7;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0xb0);
  puVar5 = (undefined4 *)FUN_0063bf80();
  fVar7 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))();
  (**(code **)(*local_24 + 0x54))();
  iVar2 = *(int *)(param_1 + 8);
  FUN_006e12f0();
  fVar8 = (in_XMM0_Da + (float)iVar1) - (float)iVar2;
  FUN_00411660();
  *(bool *)(in_ECX + 0x128) = fVar8 < (float)*(int *)(in_ECX + 0xb4);
  FUN_006e6400(auStack_54);
  FUN_006ce9f0(1);
  if (*(char *)(in_ECX + 0x128) == '\0') {
    pcVar3 = *(code **)(*(int *)(in_ECX + 0x74) + 8);
    if (pcVar3 == FUN_0040a040) {
      piVar6 = (int *)(PTR_DAT_00c7ed68 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(in_ECX + 0x78);
      *(int *)(in_ECX + 0x78) = (int)PTR_DAT_00c7ed68;
      UNLOCK();
      piVar6 = (int *)(iVar1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          uStack_4c = 0x509a95;
          FID_conflict__free(piVar6);
        }
      }
    }
    else {
      uStack_4c = 0x509aa1;
      (*pcVar3)();
    }
  }
  else {
    uStack_4c = 0x5099cb;
    FUN_0045c990();
    local_8 = 0;
    pcVar3 = *(code **)(*(int *)(in_ECX + 0x74) + 8);
    iStack_28 = (int)((ulonglong)(double)fVar7 >> 0x20);
    if (pcVar3 == FUN_0040a040) {
      piVar6 = (int *)(iStack_28 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      LOCK();
      iVar1 = *(int *)(in_ECX + 0x78);
      *(int *)(in_ECX + 0x78) = iStack_28;
      UNLOCK();
      piVar6 = (int *)(iVar1 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          uStack_4c = 0x509a1d;
          FID_conflict__free(piVar6);
        }
      }
    }
    else {
      uStack_4c = 0x509a28;
      (*pcVar3)();
    }
    piVar6 = (int *)(iStack_28 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        uStack_4c = 0x509a45;
        FID_conflict__free(piVar6);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

