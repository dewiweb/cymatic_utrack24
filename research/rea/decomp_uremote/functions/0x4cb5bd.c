// rea decompile_all
// name: FUN_004cb5bd
// address: 0x4cb5bd
// body: available
// range: 0x4cb5bd-0x4cb765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004cb5bd(int param_1,undefined4 param_2)

{
  float fVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  float10 fVar6;
  undefined4 local_4c [5];
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x4cb5c9;
  iVar5 = 2;
  puVar3 = local_4c;
  do {
    *puVar3 = 0;
    iVar5 = iVar5 + -1;
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
  } while (-1 < iVar5);
  FUN_004e37d9(param_2);
  fVar6 = (float10)FUN_004e2fc5(param_1 + 0x15c,param_2);
  local_1c = (float)fVar6;
  fVar6 = (float10)FUN_004e2fc5(param_1 + 0x160,param_2);
  local_18 = (float)fVar6;
  local_2c = local_4c[0];
  local_28 = local_4c[1];
  local_24 = local_4c[2];
  local_20 = local_4c[3];
  fVar6 = (float10)FUN_004a5522();
  local_14 = (float)fVar6;
  local_2c = local_4c[0];
  local_28 = local_4c[1];
  local_24 = local_4c[4];
  local_20 = local_38;
  fVar6 = (float10)FUN_004a5522();
  fVar1 = (float)fVar6;
  FUN_0047888f();
  local_8 = 0;
  if ((local_1c <= 0.0) || (local_18 <= 0.0)) {
    FUN_00478eaa(0,0,local_14,fVar1);
  }
  else {
    FUN_0047905b(extraout_ECX,0,0,local_14,fVar1,local_1c,local_18);
  }
  uVar4 = FUN_004775b5(local_34,0,0,local_4c[0],local_4c[1],local_14,0,local_4c[2],local_4c[3],0,
                       fVar1,local_4c[4],local_38);
  FUN_0047a42b(uVar4);
  cVar2 = FUN_00478953();
  if (cVar2 != '\0') {
    FUN_0047899c();
    thunk_FUN_004cc15f();
  }
  FUN_004f7994();
  return;
}

