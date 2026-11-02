// rea decompile_all
// name: FUN_0050cf00
// address: 0x50cf00
// body: available
// range: 0x50cf00-0x50d12a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050cf00(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  float fVar6;
  uint local_44;
  undefined *local_40;
  int local_38;
  float local_34;
  char local_2c;
  void *local_28;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070872e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_0050d130();
  iVar5 = 0;
  do {
    iVar2 = *(int *)(in_ECX + 0xb0);
    if (*(int *)(iVar2 + 0x10) == 0) {
      if (*(int *)(iVar2 + 8) == 0) {
        iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 100);
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 8) + 0x5c);
      }
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x4bc);
    }
    if (iVar2 <= iVar5) {
      FUN_00513a60();
      local_8 = 1;
      FUN_005090f0();
      local_8 = 0xffffffff;
      FID_conflict__free(local_28);
      FUN_0050d880();
      *(undefined1 *)(in_ECX + 0xb9) = 0;
      FUN_00515db0();
      ExceptionList = local_10;
      return;
    }
    FUN_00513680(&local_44);
    local_8 = 0;
    if (((local_44 < *(uint *)(in_ECX + 0x140)) &&
        (iVar2 = *(int *)(*(int *)(in_ECX + 0x138) + local_44 * 4), iVar2 != 0)) &&
       (local_40 != PTR_DAT_00c7ed54)) {
      iVar3 = FUN_0045c1e0(local_40);
      if (iVar3 != 0) {
        FUN_0050b1c0();
        *(float *)(iVar2 + 0x7bc) = local_34;
        if (0.0 < local_34) {
LAB_0050d011:
          FUN_0050a760();
        }
        else {
          fVar6 = -64.0;
          if (-64.0 <= local_34) {
            fVar6 = local_34;
          }
          if (*(float *)(iVar2 + 0x330) != fVar6) {
            *(float *)(iVar2 + 0x330) = fVar6;
            cVar1 = FUN_006e2bd0();
            if (cVar1 == '\0') goto LAB_0050d011;
          }
        }
        FUN_0050b640();
        if (*(char *)(iVar2 + 0x7b8) == '\0') {
          *(char *)(iVar2 + 0x7ba) = local_2c;
          if ((*(char *)(iVar2 + 0x7bb) == '\0') &&
             ((local_2c != '\0' || (*(char *)(iVar2 + 0x7b9) != '\0')))) {
            local_14 = CONCAT31(local_14._1_3_,1);
          }
          else {
            local_14 = (uint)local_14._1_3_ << 8;
          }
          FUN_006e5380(local_14);
        }
        FUN_0050b7d0();
        in_ECX = local_18;
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    piVar4 = (int *)(local_40 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

