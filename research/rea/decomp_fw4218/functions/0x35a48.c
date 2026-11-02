// rea decompile_all
// name: FUN_00035a48
// address: 0x35a48
// body: available
// range: 0x35a48-0x35b49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00035a48(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,byte *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined1 auStack_44 [28];
  int local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_0003b64e(DAT_00035b4c,0,1000);
  puVar4 = DAT_00035b50;
  iVar3 = DAT_00035b4c;
  local_28 = 0x3c;
  FUN_0003b646(DAT_00035b4c + 0x22,local_1c,10);
  *(char *)(iVar3 + 0x2c) = (char)param_4;
  *(char *)(iVar3 + 0x2d) = (char)param_4;
  *(undefined1 *)(iVar3 + 0x2e) = 2;
  uVar5 = FUN_0003b618(2);
  *puVar4 = uVar5;
  uVar5 = FUN_0003b618(8);
  puVar4[1] = uVar5;
  uVar5 = FUN_0003b618(param_5);
  puVar4[2] = uVar5;
  uVar5 = FUN_0003b618(param_6);
  puVar4[3] = uVar5;
  if (param_7 != (byte *)0x0) {
    bVar1 = *param_7;
    uVar6 = bVar1 + 1;
    FUN_0003b646(DAT_00035b54,param_7,uVar6);
    if ((uVar6 & 1) != 0) {
      uVar6 = bVar1 + 2;
    }
    uVar5 = FUN_0003b618(uVar6 + 8);
    local_28 = uVar6 + 0x3c;
    puVar4[1] = uVar5;
  }
  FUN_0003661e(auStack_44);
  iVar2 = *local_24;
  FUN_0003665c(auStack_44,DAT_00035b4c,local_28,0xd,*(undefined1 *)(iVar2 + 0x3b4),0,
               (int)*(short *)(iVar2 + 0x3b6),*(undefined1 *)(iVar2 + 0x3b8),
               *(undefined1 *)(iVar2 + 0x3e0));
  FUN_00035140(local_24,iVar3,local_20,local_28);
  FUN_00039a50(*(undefined2 *)(*local_24 + 2),auStack_44);
  return;
}

