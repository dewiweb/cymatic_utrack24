// rea decompile_all
// name: ATL::CSimpleStringT<wchar_t,0>::Append
// address: 0x100089a0
// body: available
// range: 0x100089a0-0x10008a21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100089c4 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall ATL::CSimpleStringT<wchar_t,0>::Append(wchar_t const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
ATL::CSimpleStringT<wchar_t,0>::Append(CSimpleStringT<wchar_t,0> *this,wchar_t *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  wchar_t *pwVar5;
  
  sVar3 = 0;
  uVar4 = (int)param_1 - *(int *)this >> 1;
  uVar1 = *(uint *)(*(int *)this + -0xc);
  if (-1 < param_2) {
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = _wcsnlen(param_1,param_2);
    }
    if ((int)uVar1 <= (int)(0x7fffffff - sVar3)) {
      iVar2 = FUN_10002140(this,uVar1 + sVar3);
      pwVar5 = (wchar_t *)(iVar2 + uVar4 * 2);
      if (uVar1 < uVar4) {
        pwVar5 = param_1;
      }
      FUN_100010f0((void *)(iVar2 + uVar1 * 2),sVar3,pwVar5,sVar3);
      FUN_100010c0(this,uVar1 + sVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10001000((undefined4 *)0x80070057);
}

