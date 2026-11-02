// rea decompile_all
// name: FUN_00432740
// address: 0x432740
// body: available
// range: 0x432740-0x43298a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00432740(undefined4 param_1,HKEY param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  LSTATUS LVar6;
  HRESULT HVar7;
  int *_Memory;
  int local_23c;
  HKEY local_238;
  DWORD local_234;
  DWORD local_230;
  undefined1 *local_22c;
  undefined1 *local_228;
  CLSID local_224;
  OLECHAR local_214 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  HRESULT local_8;
  
  local_8 = -1;
  puStack_c = &LAB_006fe19b;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_228 = (undefined1 *)0x0;
  puVar5 = (undefined4 *)FUN_00458890(local_14);
  LVar6 = RegOpenKeyExW(param_2,(LPCWSTR)*puVar5,0,0x20019,&local_238);
  if (LVar6 != 0) goto LAB_0043296d;
  _memset(local_214,0,0x200);
  local_234 = 1;
  local_230 = 0x200;
  LVar6 = RegQueryValueExW(local_238,L"clsid",(LPDWORD)0x0,&local_234,(LPBYTE)local_214,&local_230);
  if (LVar6 != 0) goto LAB_0043296d;
  if (local_230 == 0) {
LAB_00432849:
    bVar2 = false;
  }
  else {
    FUN_0045cae0(local_214);
    local_228 = (undefined1 *)0x1;
    cVar4 = FUN_004325a0();
    if (cVar4 == '\0') goto LAB_00432849;
    bVar2 = true;
  }
  if ((((uint)local_228 & 1) != 0) && (_Memory = (int *)(local_23c + -8), _Memory != &DAT_00bfe124))
  {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  if (bVar2) {
    HVar7 = CLSIDFromString(local_214,&local_224);
    if (HVar7 == 0) {
      local_234 = 1;
      local_230 = 0x200;
      local_22c = &DAT_00bfe12c;
      local_8 = HVar7;
      LVar6 = RegQueryValueExW(local_238,L"description",(LPDWORD)0x0,&local_234,(LPBYTE)local_214,
                               &local_230);
      if (LVar6 == 0) {
        FUN_0045cae0(local_214);
        puVar3 = local_22c;
        local_22c = local_228;
        local_228 = puVar3;
        FUN_00637c10();
      }
      else {
        FUN_00637b90(param_1);
      }
      FUN_006363c0(&local_22c);
      FUN_00432be0(&local_224);
      FUN_00637c10();
    }
  }
  RegCloseKey(local_238);
LAB_0043296d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

