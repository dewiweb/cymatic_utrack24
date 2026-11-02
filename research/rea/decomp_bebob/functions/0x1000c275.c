// rea decompile_all
// name: CMapPtrToPtr::GetNextAssoc
// address: 0x1000c275
// body: available
// range: 0x1000c275-0x1000c2f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c2a6 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::GetNextAssoc(struct __POSITION * &,void * &,void * &)const
   
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMapPtrToPtr::GetNextAssoc(CMapPtrToPtr *this,__POSITION **param_1,void **param_2,void **param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  __POSITION *p_Var4;
  __POSITION *p_Var5;
  
  p_Var5 = *param_1;
  if (p_Var5 != (__POSITION *)0x0) {
    if (p_Var5 == (__POSITION *)0xffffffff) {
      uVar3 = 0;
      if (*(uint *)(this + 8) != 0) {
        piVar2 = *(int **)(this + 4);
        while (p_Var5 = (__POSITION *)*piVar2, p_Var5 == (__POSITION *)0x0) {
          uVar3 = uVar3 + 1;
          piVar2 = piVar2 + 1;
          if (*(uint *)(this + 8) <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_10009068();
          }
        }
      }
    }
    p_Var4 = *(__POSITION **)p_Var5;
    if (p_Var4 == (__POSITION *)0x0) {
      uVar1 = HashKey<unsigned_long>(*(ulong *)(p_Var5 + 4));
      uVar3 = *(uint *)(this + 8);
      uVar1 = uVar1 % uVar3 + 1;
      if (uVar1 < uVar3) {
        piVar2 = (int *)(*(int *)(this + 4) + uVar1 * 4);
        do {
          p_Var4 = (__POSITION *)*piVar2;
          if (p_Var4 != (__POSITION *)0x0) break;
          uVar1 = uVar1 + 1;
          piVar2 = piVar2 + 1;
        } while (uVar1 < uVar3);
      }
    }
    *param_1 = p_Var4;
    *param_2 = *(void **)(p_Var5 + 4);
    *param_3 = *(void **)(p_Var5 + 8);
  }
  return;
}

