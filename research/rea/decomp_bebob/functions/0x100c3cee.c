// rea decompile_all
// name: FUN_100c3cee
// address: 0x100c3cee
// body: available
// range: 0x100c3cee-0x100c3d9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c3d99 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void __thiscall FUN_100c3cee(void *this,CDC *param_1)

{
  int *piVar1;
  int iVar2;
  CDC *pCVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  CMemDC local_50 [4];
  CDC *local_4c;
  int local_48;
  CDC local_40 [56];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100c3cfa;
  CMemDC::CMemDC(local_50,param_1,this);
  local_8 = 0;
  pCVar3 = local_40;
  if (local_48 == 0) {
    pCVar3 = local_4c;
  }
  CBasePane::DoPaint(this,pCVar3);
  piVar6 = *(int **)((int)this + 0x2a8);
  piVar4 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    do {
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10009068();
      }
      piVar1 = (int *)piVar6[2];
      piVar6 = (int *)*piVar6;
      piVar5 = piVar1;
      if ((piVar1[1] == 0) && (iVar2 = (**(code **)(*piVar1 + 0x14))(), piVar5 = piVar4, iVar2 != 0)
         ) {
        pCVar3 = local_40;
        if (local_48 == 0) {
          pCVar3 = local_4c;
        }
        (**(code **)(*piVar1 + 0x20))(pCVar3);
      }
      piVar4 = piVar5;
    } while (piVar6 != (int *)0x0);
    if ((piVar5 != (int *)0x0) && (iVar2 = (**(code **)(*piVar5 + 0x14))(), iVar2 != 0)) {
      pCVar3 = local_40;
      if (local_48 == 0) {
        pCVar3 = local_4c;
      }
      (**(code **)(*piVar5 + 0x20))(pCVar3);
    }
  }
  local_8 = 0xffffffff;
  CMemDC::~CMemDC(local_50);
  FUN_100f90cf();
  return;
}

