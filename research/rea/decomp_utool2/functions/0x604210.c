// rea decompile_all
// name: FUN_00604210
// address: 0x604210
// body: available
// range: 0x604210-0x604447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00604210(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined **local_24 [2];
  double local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071bd31;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = 0;
  bVar2 = false;
  iVar6 = *(int *)(*(int *)(in_ECX + 0x18) + 0x90);
  local_14 = uVar3;
  if (0 < iVar6) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x18) + 0x88) + iVar5 * 4);
      LOCK();
      iVar4 = *(int *)(iVar1 + 0xac);
      if (iVar4 == 1) {
        *(int *)(iVar1 + 0xac) = 0;
        iVar4 = 1;
      }
      UNLOCK();
      if (iVar4 == 1) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          local_1c = (double)*(float *)(iVar1 + 0xa4);
          local_24[0] = &PTR_vftable_00c7ed2c;
          local_8 = 0;
          if (*(int *)(iVar1 + 0x20) != 0) {
            FUN_00461420(*(int *)(iVar1 + 0x1c) + 0x34,local_24,
                         *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x2c));
          }
          local_8 = 0xffffffff;
          (**(code **)(*local_24[0] + 0x54))(&local_1c,uVar3);
        }
        bVar2 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar6);
    if (bVar2) {
      iVar6 = 0x14;
      goto LAB_0060431c;
    }
  }
  iVar6 = *(int *)(in_ECX + 8) + 0x14;
  if (iVar6 < 0x32) {
    iVar6 = 0x32;
  }
  else if (500 < iVar6) {
    iVar6 = 500;
  }
LAB_0060431c:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  iVar5 = DAT_00c8a668;
  if (*(int *)(in_ECX + 8) == 0) {
    *(int *)(in_ECX + 4) = iVar6;
    iVar5 = 1;
    if (1 < iVar6) {
      iVar5 = iVar6;
    }
    *(int *)(in_ECX + 8) = iVar5;
    local_8 = 1;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    iVar5 = DAT_00c8a668;
    iVar6 = *(int *)(DAT_00c8a668 + 0x4c);
    if ((iVar6 == 0) || (*(int *)(in_ECX + 4) < *(int *)(iVar6 + 4))) {
      *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(DAT_00c8a668 + 0x4c);
      *(int *)(iVar5 + 0x4c) = in_ECX;
    }
    else {
      iVar4 = *(int *)(iVar6 + 0x10);
      while ((iVar4 != 0 &&
             (iVar1 = *(int *)(iVar6 + 0x10), *(int *)(iVar1 + 4) <= *(int *)(in_ECX + 4)))) {
        iVar4 = *(int *)(iVar1 + 0x10);
        iVar6 = iVar1;
      }
      *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(iVar6 + 0x10);
      *(int *)(in_ECX + 0xc) = iVar6;
      *(int *)(iVar6 + 0x10) = in_ECX;
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      *(int *)(*(int *)(in_ECX + 0x10) + 0xc) = in_ECX;
    }
    SetEvent(*(HANDLE *)(iVar5 + 0x2c));
  }
  else if (DAT_00c8a668 != 0) {
    iVar4 = *(int *)(in_ECX + 0x10);
    *(int *)(in_ECX + 4) = iVar6;
    *(int *)(in_ECX + 8) = iVar6;
    if (((iVar4 != 0) && (*(int *)(iVar4 + 4) < iVar6)) ||
       ((*(int *)(in_ECX + 0xc) != 0 && (iVar6 < *(int *)(*(int *)(in_ECX + 0xc) + 4))))) {
      if (*(int *)(in_ECX + 0xc) == 0) {
        *(int *)(iVar5 + 0x4c) = iVar4;
      }
      else {
        *(int *)(*(int *)(in_ECX + 0xc) + 0x10) = iVar4;
      }
      if (*(int *)(in_ECX + 0x10) != 0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc) = *(undefined4 *)(in_ECX + 0xc);
      }
      *(undefined4 *)(in_ECX + 0x10) = 0;
      *(undefined4 *)(in_ECX + 0xc) = 0;
      FUN_00463c00(in_ECX);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

