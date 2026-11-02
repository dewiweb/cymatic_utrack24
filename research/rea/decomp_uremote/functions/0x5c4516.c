// rea decompile_all
// name: ___BuildCatchObject
// address: 0x5c4516
// body: available
// range: 0x5c4516-0x5c459a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void ___BuildCatchObject(int param_1,int param_2,uint *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if ((*param_3 & 0x80000000) == 0) {
    iVar3 = param_3[2] + 0xc + param_2;
  }
  iVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
    FID_conflict__CallMemberFunction1(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  return;
}

