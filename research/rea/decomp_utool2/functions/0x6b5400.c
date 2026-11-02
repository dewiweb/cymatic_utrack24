// rea decompile_all
// name: FUN_006b5400
// address: 0x6b5400
// body: available
// range: 0x6b5400-0x6b5588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5400(int param_1,undefined4 param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void **ppvVar5;
  LPCWSTR lpFileName;
  DWORD DVar6;
  int in_ECX;
  int *_Memory;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  uint uStack_44;
  char *local_20;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723ddc;
  iVar4 = *(int *)(param_1 + 8);
  ppvVar5 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar5, iVar4 = iVar4 + -1, -1 < iVar4) {
    FUN_00627bf0();
    local_8 = 0;
    if (*local_14 == '\0') {
      lpFileName = L"";
    }
    else {
      uStack_44 = 0x6b5479;
      FUN_0045d6b0();
      pcVar1 = local_14 + 1;
      do {
        cVar3 = *local_14;
        local_14 = local_14 + 1;
      } while (cVar3 != '\0');
      uStack_44 = 0x6b54a4;
      FUN_00455850();
      lpFileName = (LPCWSTR)(local_20 + ((uint)(local_14 + (4 - (int)pcVar1)) & 0xfffffffc));
      uStack_44 = 0x6b54bf;
      FUN_0045e410();
      local_14 = local_20;
    }
    uStack_44 = 0x6b54cf;
    DVar6 = GetFileAttributesW(lpFileName);
    if (((DVar6 & 0x10) != 0) && (DVar6 != 0xffffffff)) {
      if ((*(int *)(in_ECX + 0x34) == 0) ||
         (uStack_44 = (((*(int *)(*(int *)(in_ECX + 0x98) + 0x80) -
                        *(int *)(*(int *)(in_ECX + 0x98) + 0x14)) - *(int *)(in_ECX + 0x30)) +
                      param_3) / *(int *)(in_ECX + 0xa8), *(uint *)(in_ECX + 0xa4) <= uStack_44)) {
        uStack_44 = 0xffffffff;
      }
      uStack_48 = 0x6b5512;
      FUN_00459120();
      FUN_006e7e60();
      FUN_006e6400(auStack_4c);
      FUN_006ce9f0(1);
      FUN_006b5ac0();
    }
    _Memory = (int *)(local_14 + -8);
    local_8 = 0xffffffff;
    ppvVar5 = ExceptionList;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar2 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      ppvVar5 = ExceptionList;
      if (iVar2 == 0) {
        uStack_44 = 0x6b5560;
        FID_conflict__free(_Memory);
        ppvVar5 = ExceptionList;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

