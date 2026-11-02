// rea decompile_all
// name: COleStreamFile::COleStreamFile
// address: 0x100d9591
// body: available
// range: 0x100d9591-0x100d9677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall COleStreamFile::COleStreamFile(struct IStream *)
   
   Library: Visual Studio 2010 Release */

void __thiscall COleStreamFile::COleStreamFile(COleStreamFile *this,IStream *param_1)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *local_268;
  short *local_264 [18];
  wchar_t local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x25c;
  local_8 = 0x100d95a0;
  CFile::CFile((CFile *)this);
  local_8 = 0;
  *(undefined ***)this = vftable;
  ppuVar2 = FUN_1000ad47();
  FUN_10005e00(this + 0x18,(int *)ppuVar2);
  local_8._0_1_ = 1;
  *(IStream **)(this + 0x14) = param_1;
  ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)(this + 0x18));
  piVar1 = *(int **)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,local_264,0);
    if ((iVar3 == 0) && (local_264[0] != (short *)0x0)) {
      FUN_10006ce0(&local_268,local_264[0]);
      local_8._0_1_ = 2;
      pwVar4 = local_268;
      if (0x103 < *(int *)(local_268 + -6)) {
        CoTaskMemFree(local_264[0]);
        pwVar4 = (wchar_t *)FUN_10015a75(3,0xffffffff,(short *)0x0);
      }
      AfxFullPath(local_21c,pwVar4);
      CoTaskMemFree(local_264[0]);
      FUN_100022b0(this + 0x18,local_21c);
      FUN_10001030((undefined4 *)(local_268 + -8));
    }
  }
  FUN_100f90cf();
  return;
}

