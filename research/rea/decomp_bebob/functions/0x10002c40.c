// rea decompile_all
// name: FUN_10002c40
// address: 0x10002c40
// body: available
// range: 0x10002c40-0x10002ede inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_10002c40(void *this,int param_1,int param_2,int *param_3)

{
  undefined1 uVar1;
  undefined3 extraout_var;
  int iVar2;
  LPCWSTR lpFileName;
  int *piVar3;
  undefined4 *_Dst;
  DWORD DVar4;
  DWORD dwShareMode;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  DWORD dwCreationDisposition;
  DWORD dwFlagsAndAttributes;
  HANDLE pvVar5;
  size_t local_28 [8];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  _Dst = (undefined4 *)0x0;
  if (*(int *)((int)this + 0x20) != -1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 == 0) {
    FUN_10002890((int *)((int)this + 0x74),"\\\\.\\");
    FUN_10002b00((int *)((int)this + 0x74));
  }
  else {
    if (param_3 == (int *)0x0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar1 = FUN_10004380(&DAT_10164ad8);
    if (CONCAT31(extraout_var,uVar1) == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_28[2] = 0;
    local_28[3] = 0;
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    local_28[1] = 0x1c;
    iVar2 = (*DAT_10164ae4)(param_2,0,(int)this + 0x28,param_1,local_28 + 1);
    if (iVar2 == 0) {
      DVar4 = GetLastError();
      if (DVar4 == 0x103) {
        local_28[0] = 0x10002d38;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_10002ecc;
    }
    local_28[0] = 0;
    iVar2 = (*DAT_10164ae8)(param_2,local_28 + 1,0,0,local_28,0);
    if ((iVar2 == 0) && (DVar4 = GetLastError(), DVar4 != 0x7a)) goto LAB_10002ecc;
    _Dst = (undefined4 *)FUN_100085c4(local_28[0]);
    if (_Dst == (undefined4 *)0x0) {
      local_28[0] = 0x10002d8d;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    _memset(_Dst,0,local_28[0]);
    *_Dst = 5;
    iVar2 = (*DAT_10164ae8)(param_2,local_28 + 1,_Dst,local_28[0],0,0);
    if (iVar2 == 0) {
      GetLastError();
      FUN_100085b9(_Dst);
      local_28[0] = 0x10002de0;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_10002890((void *)((int)this + 0x74),(char *)(_Dst + 1));
  }
  piVar3 = (int *)((int)this + 0x74);
  pvVar5 = (HANDLE)0x0;
  dwFlagsAndAttributes = 0x40000000;
  dwCreationDisposition = 3;
  lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
  dwShareMode = 3;
  DVar4 = 0xc0000000;
  lpFileName = (LPCWSTR)FUN_10002be0(*(LPCSTR *)(*piVar3 + 4));
  pvVar5 = CreateFileW(lpFileName,DVar4,dwShareMode,lpSecurityAttributes,dwCreationDisposition,
                       dwFlagsAndAttributes,pvVar5);
  *(HANDLE *)((int)this + 0x20) = pvVar5;
  if (pvVar5 == (HANDLE)0xffffffff) {
    GetLastError();
    FUN_100029e0(piVar3);
    FUN_100085b9(_Dst);
    local_28[0] = 0x10002e54;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  pvVar5 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  *(HANDLE *)((int)this + 0x48) = pvVar5;
  if (pvVar5 == (HANDLE)0x0) {
    FUN_100029e0(piVar3);
    FUN_100085b9(_Dst);
    (**(code **)(*(int *)this + 0xc))();
    GetLastError();
    local_28[0] = 0x10002e9b;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_100085b9(_Dst);
  *(int *)((int)this + 0x24) = param_1;
  *(int *)((int)this + 100) = *param_3;
  *(int *)((int)this + 0x68) = param_3[1];
  *(int *)((int)this + 0x6c) = param_3[2];
  *(int *)((int)this + 0x70) = param_3[3];
LAB_10002ecc:
  local_28[0] = 0x10002ed9;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

