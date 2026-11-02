// rea decompile_all
// name: CMemFile::Seek
// address: 0x1009aa3b
// body: available
// range: 0x1009aa3b-0x1009aaa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1009aa6b) */
/* WARNING: Removing unreachable block (ram,0x1009aa8b) */
/* Library Function - Single Match
    public: virtual unsigned __int64 __thiscall CMemFile::Seek(__int64,unsigned int)
   
   Library: Visual Studio 2010 Release */

__uint64 __thiscall CMemFile::Seek(CMemFile *this,__int64 param_1,uint param_2)

{
  longlong lVar1;
  short *psVar2;
  short *extraout_ECX;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x18);
  psVar2 = (short *)0x0;
  lVar1 = param_1;
  if (param_2 == 0) {
    while (uVar3 = (uint)lVar1, lVar1 < CONCAT44(psVar2,psVar2)) {
LAB_1009aa70:
      FUN_10015a75(9,0xffffffff,psVar2);
      psVar2 = extraout_ECX;
LAB_1009aa7a:
      uVar3 = *(uint *)(this + 0x20);
LAB_1009aa7f:
      lVar1 = param_1 + (ulonglong)uVar3;
    }
    if (*(uint *)(this + 0x20) < uVar3) {
      (**(code **)(*(int *)this + 0x68))(uVar3);
    }
    *(uint *)(this + 0x18) = uVar3;
  }
  else {
    if (param_2 == 1) goto LAB_1009aa7f;
    if (param_2 == 2) {
      if (param_1 < 1) goto LAB_1009aa7a;
      goto LAB_1009aa70;
    }
  }
  return (__uint64)uVar3;
}

