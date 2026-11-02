// rea decompile_all
// name: CFile::Open
// address: 0x1000daa4
// body: available
// range: 0x1000daa4-0x1000dc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFile::Open(wchar_t const *,unsigned int,class CFileException *)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFile::Open(CFile *this,wchar_t *param_1,uint param_2,CFileException *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  DWORD dwCreationDisposition;
  HANDLE pvVar4;
  DWORD dwFlagsAndAttributes;
  uint *unaff_EBX;
  uint unaff_ESI;
  wchar_t *unaff_EDI;
  DWORD dwShareMode;
  _SECURITY_ATTRIBUTES local_228;
  CFileException *local_21c;
  DWORD local_218;
  wchar_t *local_214;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0xffffffff;
  local_214 = param_1;
  local_21c = param_3;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0xc));
  if ((local_214 == (wchar_t *)0x0) ||
     (lVar1 = StringLengthWorkerW(unaff_EDI,unaff_ESI,unaff_EBX), param_3 = local_21c, lVar1 < 0)) {
    if (param_3 != (CFileException *)0x0) {
      *(undefined4 *)(param_3 + 8) = 3;
      FUN_100022b0(param_3 + 0x10,local_214);
    }
    goto LAB_1000dc8b;
  }
  iVar2 = _AfxFullPath2(local_210,local_214,local_21c);
  if (iVar2 == 0) goto LAB_1000dc8b;
  FUN_100022b0(this + 0xc,local_210);
  uVar3 = param_2 & 3;
  local_218 = 0;
  if (uVar3 == 0) {
    local_218 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_218 = 0x40000000;
  }
  else if (uVar3 == 2) {
    local_218 = 0xc0000000;
  }
  uVar3 = param_2 & 0x70;
  if ((uVar3 == 0) || (uVar3 == 0x10)) {
LAB_1000dba0:
    dwShareMode = 0;
  }
  else if (uVar3 == 0x20) {
    dwShareMode = 1;
  }
  else if (uVar3 == 0x30) {
    dwShareMode = 2;
  }
  else {
    if (uVar3 != 0x40) goto LAB_1000dba0;
    dwShareMode = 3;
  }
  local_228.bInheritHandle = ~((param_2 & 0xffff7fff) >> 7) & 1;
  local_228.nLength = 0xc;
  local_228.lpSecurityDescriptor = (LPVOID)0x0;
  if ((param_2 & 0x1000) == 0) {
    dwCreationDisposition = 3;
  }
  else {
    dwCreationDisposition = (-(uint)((param_2 & 0x2000) != 0) & 2) + 2;
  }
  dwFlagsAndAttributes = 0x80;
  if ((param_2 & 0x10000) != 0) {
    dwFlagsAndAttributes = 0x20000080;
  }
  if ((param_2 & 0x20000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x80000000;
  }
  if ((param_2 & 0x40000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x10000000;
  }
  if ((param_2 & 0x80000) != 0) {
    dwFlagsAndAttributes = dwFlagsAndAttributes | 0x8000000;
  }
  if (*(int *)(this + 0x10) == 0) {
    pvVar4 = CreateFileW(local_214,local_218,dwShareMode,&local_228,dwCreationDisposition,
                         dwFlagsAndAttributes,(HANDLE)0x0);
  }
  else {
    pvVar4 = FID_conflict_CreateFileA
                       ((LPCSTR)local_214,local_218,dwShareMode,&local_228,dwCreationDisposition,
                        dwFlagsAndAttributes,(HANDLE)0x0);
  }
  if (pvVar4 == (HANDLE)0xffffffff) {
    _AfxFillExceptionInfo(local_21c,local_214);
  }
  else {
    *(HANDLE *)(this + 4) = pvVar4;
    *(undefined4 *)(this + 8) = 1;
  }
LAB_1000dc8b:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

