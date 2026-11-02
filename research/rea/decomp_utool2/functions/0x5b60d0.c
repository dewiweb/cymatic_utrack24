// rea decompile_all
// name: FUN_005b60d0
// address: 0x5b60d0
// body: available
// range: 0x5b60d0-0x5b62a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b60d0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00719482;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4f));
  local_8 = 0;
  piVar5 = in_ECX + 0x15;
  iVar6 = 4;
  do {
    if ((int *)*piVar5 != (int *)0x0) {
      (**(code **)(*(int *)*piVar5 + 0x10))(uVar2);
    }
    piVar5 = piVar5 + 0x13;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  iVar6 = in_ECX[0x57];
  while (iVar6 != 0) {
    if (iVar6 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)in_ECX[0x55];
    }
    (**(code **)(*piVar5 + 0xc))();
    if (in_ECX[0x57] == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)in_ECX[0x55];
    }
    if (((*(char *)(iVar6 + 8) != '\0') && (in_ECX[0x57] != 0)) &&
       (*(undefined4 **)in_ECX[0x55] != (undefined4 *)0x0)) {
      (**(code **)**(undefined4 **)in_ECX[0x55])(1);
    }
    if (in_ECX[0x57] != 0) {
      iVar6 = in_ECX[0x57] + -1;
      in_ECX[0x57] = iVar6;
      if (0 < iVar6) {
        FUN_004c1df0(in_ECX[0x55],in_ECX[0x55] + 4,iVar6 * 4);
      }
      iVar6 = in_ECX[0x57];
      iVar4 = in_ECX[0x56];
      iVar3 = 0;
      if (0 < iVar6 * 2) {
        iVar3 = iVar6 * 2;
      }
      if (iVar3 < iVar4) {
        if (iVar6 < 0x10) {
          iVar6 = 0x10;
        }
        if ((iVar6 < iVar4) && (iVar4 != iVar6)) {
          if (iVar6 < 1) {
            FID_conflict__free((void *)in_ECX[0x55]);
            in_ECX[0x55] = 0;
          }
          else if (in_ECX[0x55] == 0) {
            iVar4 = FUN_004c554b();
            in_ECX[0x55] = iVar4;
          }
          else {
            iVar4 = FUN_004c553b(in_ECX[0x55],iVar6 * 4);
            in_ECX[0x55] = iVar4;
          }
          in_ECX[0x56] = iVar6;
        }
      }
    }
    iVar6 = in_ECX[0x57];
  }
  local_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x4f));
  Sleep(500);
  LOCK();
  iVar6 = *(int *)(in_ECX[1] + 0xc);
  *(int *)(in_ECX[1] + 0xc) = 0;
  UNLOCK();
  if (iVar6 != 0) {
    (**(code **)(*in_ECX + 4))();
  }
  cVar1 = (char)in_ECX[0x5b];
  while (cVar1 == '\0') {
    Sleep(500);
    cVar1 = (char)in_ECX[0x5b];
  }
  ExceptionList = local_10;
  return;
}

