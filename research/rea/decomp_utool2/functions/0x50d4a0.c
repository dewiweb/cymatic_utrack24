// rea decompile_all
// name: FUN_0050d4a0
// address: 0x50d4a0
// body: available
// range: 0x50d4a0-0x50d78a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050d4a0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *_Memory;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  double in_XMM0_Qa;
  double dVar8;
  void *local_30;
  undefined8 local_2c;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070877c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if ((*(char *)(in_ECX + 0x35) == '\0') && (*(char *)(in_ECX + 0x34) == '\0')) {
    if (*(char *)(in_ECX + 0x37) == '\0') {
      FUN_00412510(uVar2);
      if (*(double *)(in_ECX + 0x28) == in_XMM0_Qa) goto LAB_0050d606;
      FUN_00412510();
      *(double *)(in_ECX + 0x28) = in_XMM0_Qa;
    }
    else {
      if (*(int *)(in_ECX + 0x10f0) != 0) {
        if (*(int *)(in_ECX + 0x10f0) < 1) {
          iVar4 = 0;
        }
        else {
          iVar4 = **(int **)(in_ECX + 0x10e8);
        }
        if (*(int *)(iVar4 + 0xc) != 0) {
          FUN_005ce9d0();
          *(double *)(in_ECX + 0x28) = in_XMM0_Qa;
        }
      }
      dVar8 = *(double *)(in_ECX + 0x28);
      local_2c = dVar8;
      FUN_00412510(uVar2);
      if (local_2c == dVar8) {
LAB_0050d606:
        if (*(char *)(in_ECX + 0x36) == '\0') goto LAB_0050d66b;
      }
      else {
        FUN_004124f0();
      }
    }
  }
  else {
    puVar3 = (undefined4 *)FUN_0063bf80(local_24);
    fVar7 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2);
    local_2c = (double)fVar7;
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    if (*(double *)(in_ECX + 0x28) == local_2c) goto LAB_0050d606;
    puVar3 = (undefined4 *)FUN_0063bf80(local_24);
    fVar7 = (float10)(**(code **)(*(int *)*puVar3 + 0xc))(puVar3 + 2);
    local_2c = (double)fVar7;
    (**(code **)(*local_24[0] + 0x54))(local_1c);
    *(double *)(in_ECX + 0x28) = local_2c;
  }
  *(undefined1 *)(in_ECX + 0x36) = 0;
  FUN_005b5190();
  local_8 = 0;
  if (*(int *)(in_ECX + 0x628) == 0) {
    FUN_006e4900((int)&local_2c + 4,0);
  }
  local_8 = 0xffffffff;
  _Memory = (int *)(local_2c._4_4_ + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar4 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(_Memory);
    }
  }
LAB_0050d66b:
  if (*(char *)(in_ECX + 0x1104) != '\0') {
    *(undefined1 *)(in_ECX + 0x1104) = 0;
    local_30 = (void *)0x0;
    local_2c = 0.0;
    local_8 = 1;
    FUN_004e7320(&local_30);
    uVar2 = local_2c._4_4_;
    uVar5 = 0;
    if (0 < (int)local_2c._4_4_) {
      bVar6 = local_2c._4_4_ != 0;
      do {
        if ((bVar6) && (*(float *)((int)local_30 + uVar5 * 4) != 0.0)) {
          FUN_006f81c0();
        }
        if (uVar5 < *(uint *)(in_ECX + 0xc0)) {
          iVar4 = *(int *)(*(int *)(in_ECX + 0xb8) + uVar5 * 4);
        }
        else {
          iVar4 = 0;
        }
        if (((*(byte *)(iVar4 + 0x69) & 0x10) == 0) &&
           ((*(int *)(iVar4 + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) {
          if (uVar5 < *(uint *)(in_ECX + 0xc0)) {
            iVar4 = *(int *)(*(int *)(in_ECX + 0xb8) + uVar5 * 4);
          }
          else {
            iVar4 = 0;
          }
          if (*(char *)(iVar4 + 0x7b8) == '\0') {
            FUN_00511810();
          }
        }
        uVar5 = uVar5 + 1;
        bVar6 = uVar5 < uVar2;
      } while ((int)uVar5 < (int)uVar2);
    }
    FID_conflict__free(local_30);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

