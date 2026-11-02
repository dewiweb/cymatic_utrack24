// rea decompile_all
// name: FUN_0045589c
// address: 0x45589c
// body: available
// range: 0x45589c-0x45594b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0045589c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uStack_34;
  undefined4 *puStack_30;
  int aiStack_2c [5];
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4558a8;
  aiStack_2c[0] = 0x4558af;
  aiStack_2c[0] = FUN_0044bfc5();
  aiStack_2c[0] = aiStack_2c[0] + 0x84;
  local_14 = (undefined1 *)aiStack_2c;
  puStack_30 = (undefined4 *)0x4558c2;
  FUN_004d076d();
  uVar3 = param_1;
  puStack_30 = (undefined4 *)0x4558cc;
  FUN_0047d23a();
  aiStack_2c[0] = 0x4558d1;
  iVar4 = FUN_0044bfc5();
  local_14 = (undefined1 *)(float)*(int *)(iVar4 + 8);
  aiStack_2c[0] = 0x4558dc;
  iVar4 = FUN_0044bfc5();
  uVar1 = *(undefined4 *)(iVar4 + 0xc);
  aiStack_2c[0] = in_ECX + 0x608;
  puStack_30 = (undefined4 *)0x4558eb;
  FUN_0047ceaa();
  local_18 = (undefined1 *)&puStack_30;
  uStack_34 = 0x4558fb;
  FUN_004d076d();
  uStack_34 = 0x455902;
  FUN_0047cda7();
  puStack_30 = &param_1;
  uStack_34 = 0x455910;
  FUN_0046537e();
  local_8 = 0;
  puStack_30 = (undefined4 *)0x1;
  local_18 = (undefined1 *)&uStack_34;
  uStack_34 = 0x21;
  uVar2 = *(undefined4 *)(in_ECX + 0x18);
  uVar5 = FUN_005b3fb0();
  FUN_0047d02d(uVar3,&param_1,uVar1,0,uVar2,uVar5);
  puStack_30 = (undefined4 *)0x455944;
  FUN_004652d6();
  return;
}

