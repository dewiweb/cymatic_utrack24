// rea decompile_all
// name: FUN_004321f0
// address: 0x4321f0
// body: available
// range: 0x4321f0-0x4323e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004321f0(void)

{
  int *_Memory;
  LSTATUS LVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *local_21c;
  HKEY local_218;
  WCHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe11b;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0x30) = 1;
  FUN_0040f7f0(local_14);
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x18));
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if (*(int *)(in_ECX + 0x28) != 0) {
    FID_conflict__free(*(void **)(in_ECX + 0x24));
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined4 *)(in_ECX + 0x28) = 0;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  local_218 = (HKEY)0x0;
  iVar6 = 0;
  LVar1 = RegOpenKeyW((HKEY)0x80000002,L"software\\asio",&local_218);
  pcVar5 = RegEnumKeyW_exref;
  if (LVar1 == 0) {
    iVar2 = RegEnumKeyW(local_218,0,local_214,0x100);
    while (iVar2 == 0) {
      iVar6 = iVar6 + 1;
      if (local_214[0] == L'\0') {
        local_21c = (undefined4 *)&DAT_00bfe12c;
      }
      else {
        iVar2 = FUN_0045ddd0(local_214);
        uVar4 = iVar2 + 4U & 0xfffffffc;
        puVar3 = (undefined4 *)FUN_004bfe22(uVar4 + 0xb);
        puVar3[1] = uVar4;
        *puVar3 = 0;
        FUN_0045e480(local_214);
        pcVar5 = RegEnumKeyW_exref;
        local_21c = puVar3 + 2;
      }
      local_8 = 0;
      FUN_00432740(&local_21c,local_218);
      local_8 = 0xffffffff;
      _Memory = local_21c + -2;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar2 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      iVar2 = (*pcVar5)(local_218,iVar6,local_214,0x100);
    }
    RegCloseKey(local_218);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

