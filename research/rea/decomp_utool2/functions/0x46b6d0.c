// rea decompile_all
// name: FUN_0046b6d0
// address: 0x46b6d0
// body: available
// range: 0x46b6d0-0x46b8e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b6d0(void)

{
  uint uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  int *piVar3;
  int *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  int iVar4;
  
  puStack_c = &LAB_00701629;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = (int)&DAT_00bfe12c;
  in_ECX[1] = (int)&DAT_00bfe12c;
  in_ECX[2] = (int)&DAT_00bfe12c;
  in_ECX[3] = (int)&DAT_00bfe12c;
  local_8 = 3;
  hModule = GetModuleHandleA("ntdll");
  if (hModule != (HMODULE)0x0) {
    pFVar2 = GetProcAddress(hModule,"wine_get_version");
    if (pFVar2 != (FARPROC)0x0) {
      FUN_0045c990("Bitstream Vera Sans",uVar1);
      iVar4 = *in_ECX;
      *in_ECX = local_14;
      piVar3 = (int *)(iVar4 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_0045c990("Bitstream Vera Serif",uVar1);
      iVar4 = in_ECX[1];
      in_ECX[1] = local_14;
      piVar3 = (int *)(iVar4 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      FUN_0045c990("Bitstream Vera Sans Mono");
      iVar4 = in_ECX[2];
      in_ECX[2] = local_14;
      goto LAB_0046b8b3;
    }
  }
  FUN_0045c990("Verdana",uVar1);
  iVar4 = *in_ECX;
  *in_ECX = local_14;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("Times New Roman",uVar1);
  iVar4 = in_ECX[1];
  in_ECX[1] = local_14;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("Lucida Console");
  iVar4 = in_ECX[2];
  in_ECX[2] = local_14;
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("Tahoma");
  iVar4 = in_ECX[3];
  in_ECX[3] = local_14;
LAB_0046b8b3:
  piVar3 = (int *)(iVar4 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

