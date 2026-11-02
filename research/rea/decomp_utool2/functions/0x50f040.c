// rea decompile_all
// name: FUN_0050f040
// address: 0x50f040
// body: available
// range: 0x50f040-0x50f22a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0050f040(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c;
  int local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007088e0;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(byte *)(in_ECX + 0x741) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x741) = *(byte *)(in_ECX + 0x741) | 0x10;
    iVar5 = *(int *)(in_ECX + 0x6e4);
    if (iVar5 != 0) {
      if ((*(byte *)(iVar5 + 0x69) & 0x10) != 0) goto LAB_0050f0a7;
      if (*(int *)(iVar5 + 0xc) != 0) {
        cVar2 = FUN_006e6320(uVar3);
        if (cVar2 == '\0') goto LAB_0050f0a7;
      }
    }
    FUN_006cc240();
  }
LAB_0050f0a7:
  if ((*(byte *)(in_ECX + 0x281) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x281) = *(byte *)(in_ECX + 0x281) | 0x10;
    iVar5 = *(int *)(in_ECX + 0x224);
    if (iVar5 != 0) {
      if ((*(byte *)(iVar5 + 0x69) & 0x10) != 0) goto LAB_0050f0e4;
      if (*(int *)(iVar5 + 0xc) != 0) {
        cVar2 = FUN_006e6320(uVar3);
        if (cVar2 == '\0') goto LAB_0050f0e4;
      }
    }
    FUN_006cc240();
  }
LAB_0050f0e4:
  if ((*(byte *)(in_ECX + 0x399) & 0x10) == 0) {
    *(byte *)(in_ECX + 0x399) = *(byte *)(in_ECX + 0x399) | 0x10;
    iVar5 = *(int *)(in_ECX + 0x33c);
    if (iVar5 != 0) {
      if ((*(byte *)(iVar5 + 0x69) & 0x10) != 0) goto LAB_0050f121;
      if (*(int *)(iVar5 + 0xc) != 0) {
        cVar2 = FUN_006e6320(uVar3);
        if (cVar2 == '\0') goto LAB_0050f121;
      }
    }
    FUN_006cc240();
  }
LAB_0050f121:
  iVar5 = *(int *)(in_ECX + 0xb0);
  if (*(int *)(iVar5 + 0x10) == 0) {
    if (*(int *)(iVar5 + 8) == 0) {
      iVar5 = *(int *)(*(int *)(iVar5 + 0xc) + 100);
    }
    else {
      iVar5 = *(int *)(*(int *)(iVar5 + 8) + 0x5c);
    }
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar5 + 0x10) + 0x4bc);
  }
  iVar6 = 0;
  if (0 < iVar5) {
    do {
      FUN_00513680(&local_30,iVar6);
      local_8 = 0;
      if (local_30 + 1 <= *(int *)(in_ECX + 0xa4)) {
        piVar4 = (int *)(local_24 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          *piVar4 = *piVar4 + 1;
          UNLOCK();
        }
        FUN_005100f0(local_30,local_24);
      }
      local_8 = 0xffffffff;
      piVar4 = (int *)(local_24 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      piVar4 = (int *)(local_2c + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
    *(undefined4 *)(in_ECX + 0x1180) = 0;
    ExceptionList = local_10;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x1180) = 0;
  ExceptionList = local_10;
  return 1;
}

