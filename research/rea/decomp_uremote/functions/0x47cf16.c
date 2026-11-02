// rea decompile_all
// name: FUN_0047cf16
// address: 0x47cf16
// body: available
// range: 0x47cf16-0x47cffc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047cf16(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_1c;
  
  if (*(char *)*param_2 != '\0') {
    iVar1 = *(int *)*param_1;
    FUN_004a51ab();
    cVar2 = (**(code **)(iVar1 + 0x28))();
    if (cVar2 != '\0') {
      FUN_0049fe5a();
      uVar6 = in_ECX[2];
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = (**(code **)(*(int *)*param_1 + 0x6c))(0,0,uVar6);
      FUN_0049fef3(uVar3,uVar4,uVar5,uVar6);
      FUN_004a0970(local_1c,*in_ECX,in_ECX[1],in_ECX[2],in_ECX[3]);
      FUN_004a0fcb();
      FUN_0049fea0();
    }
  }
  return;
}

