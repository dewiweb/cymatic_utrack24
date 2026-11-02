// rea decompile_all
// name: FUN_0016636c
// address: 0x16636c
// body: available
// range: 0x16636c-0x16651f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0016636c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 local_40;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  piVar5 = (int *)(param_1 + -0x114);
  iStack_34 = param_1;
  if (param_3 != 0) {
    uVar6 = *DAT_00166520;
    uVar7 = DAT_00166520[1];
    uVar1 = FUN_001da408(auStack_4c,param_4);
    uVar2 = FUN_001da408(auStack_48,param_5);
    local_40 = FUN_001da408(auStack_44,param_6);
    puVar3 = (undefined4 *)FUN_001a0808(0x24,1);
    if (puVar3 == (undefined4 *)0x0) {
      iVar4 = 0;
    }
    else {
      FUN_001da408(auStack_58,uVar1);
      FUN_001da408(auStack_54,uVar2);
      FUN_001da408(auStack_50,local_40);
      *puVar3 = DAT_00166524;
      puVar3[1] = piVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      *(char *)(puVar3 + 4) = (char)param_2;
      puVar3[5] = param_3;
      iVar4 = FUN_001da408(puVar3 + 6,auStack_58);
      iVar4 = FUN_001da408(iVar4 + 4,auStack_54);
      iVar4 = FUN_001da408(iVar4 + 4,auStack_50);
      iVar4 = iVar4 + -0x20;
    }
    iVar4 = (**(code **)(*piVar5 + 0x2c))(piVar5,iVar4,0);
    if (puVar3 != (undefined4 *)0x0) {
      thunk_FUN_001da44c(auStack_50);
      thunk_FUN_001da44c(auStack_54);
      thunk_FUN_001da44c(auStack_58);
    }
    FUN_001da44c(auStack_44);
    FUN_001da44c(auStack_48);
    FUN_001da44c(auStack_4c);
    if (iVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0016651c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),local_30);
  return;
}

