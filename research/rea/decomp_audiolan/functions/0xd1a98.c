// rea decompile_all
// name: FUN_000d1a98
// address: 0xd1a98
// body: available
// range: 0xd1a98-0xd1bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000d1a98(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  int *piStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = *DAT_000d1bd0;
  uVar5 = DAT_000d1bd0[1];
  piStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  local_3c = FUN_001da408(auStack_44,param_3);
  uVar1 = FUN_001da408(auStack_40,param_4);
  puVar2 = (undefined4 *)FUN_001a0808(0x1c,1);
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    FUN_001da408(auStack_4c,local_3c);
    FUN_001da408(auStack_48,uVar1);
    *puVar2 = DAT_000d1bd4;
    puVar2[1] = param_1;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    *(char *)(puVar2 + 4) = (char)param_2;
    iVar3 = FUN_001da408(puVar2 + 5,auStack_4c);
    iVar3 = FUN_001da408(iVar3 + 4,auStack_48);
    iVar3 = iVar3 + -0x18;
  }
  iVar3 = (**(code **)(*param_1 + 0x2c))(param_1,iVar3,0);
  if (puVar2 != (undefined4 *)0x0) {
    thunk_FUN_001da44c(auStack_48);
    thunk_FUN_001da44c(auStack_4c);
  }
  FUN_001da44c(auStack_40);
  FUN_001da44c(auStack_44);
  if (iVar3 == 0) {
    (**(code **)(*(int *)param_1[0x46] + 8))((int *)param_1[0x46],local_30,2);
    return;
  }
  return;
}

