// rea decompile_all
// name: FUN_001d7488
// address: 0x1d7488
// body: available
// range: 0x1d7488-0x1d75cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_001d7488(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)FUN_001a0808(0x50,1);
  uVar2 = DAT_001d75d0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = *param_6;
    local_5c = DAT_001d75d0;
    local_58 = *(undefined1 *)(param_6 + 2);
    local_57 = *(undefined1 *)((int)param_6 + 9);
    local_56 = *(undefined1 *)((int)param_6 + 10);
    local_55 = *(undefined1 *)((int)param_6 + 0xb);
    local_54 = param_6[3];
    uStack_50 = param_6[4];
    uStack_4c = param_6[5];
    uStack_48 = param_6[6];
    local_44 = param_6[7];
    uStack_40 = param_6[8];
    uStack_3c = param_6[9];
    uStack_38 = param_6[10];
    local_34 = param_6[0xb];
    uStack_30 = param_6[0xc];
    uStack_2c = param_6[0xd];
    local_28 = param_6[0xe];
    *puVar1 = DAT_001d75d4;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    puVar1[6] = uVar2;
    puVar1[5] = uVar3;
    *(undefined1 *)(puVar1 + 7) = local_58;
    *(undefined1 *)((int)puVar1 + 0x1d) = local_57;
    *(undefined1 *)((int)puVar1 + 0x1e) = local_56;
    *(undefined1 *)((int)puVar1 + 0x1f) = local_55;
    puVar1[8] = local_54;
    puVar1[9] = uStack_50;
    puVar1[10] = uStack_4c;
    puVar1[0xb] = uStack_48;
    puVar1[0xc] = local_44;
    puVar1[0xd] = uStack_40;
    puVar1[0xe] = uStack_3c;
    puVar1[0xf] = uStack_38;
    puVar1[0x10] = local_34;
    puVar1[0x11] = uStack_30;
    puVar1[0x12] = uStack_2c;
    puVar1[0x13] = local_28;
  }
  uVar2 = (**(code **)(*param_1 + 0x2c))(param_1,puVar1,param_7);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0007b9a4(&local_5c);
  }
  return uVar2;
}

