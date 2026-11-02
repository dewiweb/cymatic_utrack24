// rea decompile_all
// name: FUN_00196b04
// address: 0x196b04
// body: available
// range: 0x196b04-0x196c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x196bec to 0x15d808 FUN_0015d808 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00196b04(int *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  
  puVar1 = (undefined4 *)param_1[0x22];
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)param_1[0x23];
    if (puVar1 == (undefined4 *)0x0) goto LAB_00196be0;
    if (param_3 == 0x9209 && param_4 == 1) {
      uVar4 = FUN_001726d4(auStack_20,param_9);
      uVar2 = FUN_001726d4(auStack_2c,param_2);
      (**(code **)*puVar1)(puVar1,*(int *)(*param_1 + -0xc) + (int)param_1,2,uVar2,uVar4);
      FUN_0015d704(param_1);
      return;
    }
    param_6 = FUN_001726d4(auStack_38,DAT_00196c44);
    param_4 = FUN_001726d4(auStack_44,DAT_00196c44);
    iVar3 = *(int *)(*param_1 + -0xc);
    pcVar5 = *(code **)*puVar1;
    uVar4 = 0x80;
  }
  else {
    if (param_3 != 0x9202) {
      (**(code **)*puVar1)(puVar1,*(int *)(*param_1 + -0xc) + (int)param_1,0x80,0,0);
      goto LAB_00196be0;
    }
    iVar3 = *(int *)(*param_1 + -0xc);
    pcVar5 = *(code **)*puVar1;
    uVar4 = 0x81;
  }
  (*pcVar5)(puVar1,iVar3 + (int)param_1,uVar4,param_4,param_6);
LAB_00196be0:
  FUN_0015d808(param_1);
  return;
}

