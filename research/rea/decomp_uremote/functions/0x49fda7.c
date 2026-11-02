// rea decompile_all
// name: FUN_0049fda7
// address: 0x49fda7
// body: available
// range: 0x49fda7-0x49fe42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049fda7(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int *extraout_EDX;
  float10 fVar3;
  float10 extraout_ST1;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 local_68 [56];
  undefined1 local_30 [24];
  float local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x49fdb3;
  if (*(char *)(in_ECX + 0x18) == '\0') {
    iVar1 = FUN_0049f7d4();
    if (iVar1 != 0) {
      FUN_0047888f();
      local_8 = 0;
      (**(code **)(*extraout_EDX + 0x1c))(*(undefined4 *)(in_ECX + 8),extraout_ECX);
      uVar2 = *(undefined4 *)(in_ECX + 0x10);
      puVar4 = local_30;
      uVar5 = *(undefined4 *)(in_ECX + 0xc);
      fVar3 = (float10)FUN_0049fa3d(puVar4,uVar5,uVar2);
      FUN_0049fa3d((float)fVar3);
      fVar3 = (float10)FUN_0049f98f();
      local_18 = (float)(fVar3 * extraout_ST1);
      FUN_00477435(local_18);
      uVar2 = FUN_0047713c(puVar4,uVar5,uVar2);
      FUN_0047a292(param_1,local_68,uVar2);
      FUN_004f7994();
    }
  }
  return;
}

