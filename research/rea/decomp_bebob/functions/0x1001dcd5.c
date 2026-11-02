// rea decompile_all
// name: CDC::GetHalftoneBrush
// address: 0x1001dcd5
// body: available
// range: 0x1001dcd5-0x1001dd7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CBrush * __stdcall CDC::GetHalftoneBrush(void)
   
   Library: Visual Studio 2010 Release */

CBrush * CDC::GetHalftoneBrush(void)

{
  byte bVar1;
  int iVar2;
  HBITMAP hbm;
  CBrush *pCVar3;
  short local_18 [8];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  AfxLockGlobals(8);
  if (DAT_10166d08 == (HBRUSH)0x0) {
    iVar2 = 0;
    do {
      bVar1 = (byte)iVar2;
      iVar2 = iVar2 + 1;
      *(short *)(&stack0xffffffe6 + iVar2 * 2) = 0x5555 << (bVar1 & 1);
    } while (iVar2 < 8);
    hbm = CreateBitmap(8,8,1,1,local_18);
    if (hbm != (HBITMAP)0x0) {
      DAT_10166d08 = CreatePatternBrush(hbm);
      DeleteObject(hbm);
    }
  }
  if (DAT_10166d0c == '\0') {
    iVar2 = _atexit((_func_4879 *)&LAB_1001dc58);
    DAT_10166d0c = '\x01' - (iVar2 != 0);
  }
  AfxUnlockGlobals(8);
  CGdiObject::FromHandle(DAT_10166d08);
  pCVar3 = (CBrush *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}

