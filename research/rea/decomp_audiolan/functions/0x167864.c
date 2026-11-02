// rea decompile_all
// name: FUN_00167864
// address: 0x167864
// body: available
// range: 0x167864-0x167963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00167864(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar4 = (int *)(param_1 + -0x114);
  uVar6 = *(undefined4 *)(DAT_00167964 + 0x130);
  uVar5 = *(undefined4 *)(DAT_00167964 + 0x134);
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  local_40 = FUN_001d9c54(auStack_44,param_3);
  local_3c = 0;
  puVar1 = (undefined4 *)FUN_001a0808(0x20,1);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    local_38 = piVar4;
    FUN_001d9c54(auStack_48,local_40);
    *puVar1 = DAT_00167968;
    puVar1[3] = uVar5;
    puVar1[1] = local_38;
    puVar1[2] = uVar6;
    *(char *)(puVar1 + 4) = (char)param_2;
    iVar2 = FUN_001d9c54(puVar1 + 5,auStack_48);
    *(char *)(iVar2 + 4) = (char)param_4;
    iVar3 = iVar2 + -0x14;
    *(undefined4 *)(iVar2 + 8) = param_5;
  }
  iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,iVar3,local_3c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_001d9b00(auStack_48);
  }
  FUN_001d9b00(auStack_44);
  if (iVar3 != 1) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),local_30,2);
    return;
  }
  return;
}

