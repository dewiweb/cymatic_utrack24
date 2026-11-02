// rea decompile_all
// name: FUN_00036228
// address: 0x36228
// body: available
// range: 0x36228-0x36355 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00036228(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  byte *local_48;
  undefined1 auStack_44 [32];
  int *local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_48 = (byte *)0x0;
  local_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_0003b64e(DAT_00036358,0,1000);
  puVar2 = DAT_0003635c;
  iVar1 = DAT_00036358;
  FUN_0003b646(DAT_00036358 + 0x22,param_3,10);
  *(char *)(iVar1 + 0x2c) = (char)param_4;
  *(char *)(iVar1 + 0x2d) = (char)param_4;
  *(undefined1 *)(iVar1 + 0x2e) = 2;
  iVar4 = FUN_0002b640(&local_48);
  if (iVar4 != 0) {
    FUN_0003b646(DAT_00036360,local_48,1);
    FUN_0003b646(DAT_00036364,*(undefined4 *)(local_48 + 4),*local_48);
    uVar5 = *local_48 + 0x37;
    if ((uVar5 & 1) != 0) {
      uVar5 = *local_48 + 0x38;
    }
    uVar3 = FUN_0003b618(1);
    *puVar2 = uVar3;
    uVar3 = FUN_0003b618(uVar5 - 0x34);
    puVar2[1] = uVar3;
    uVar3 = FUN_0003b618(2);
    puVar2[2] = uVar3;
    FUN_0003661e(auStack_44);
    iVar4 = *local_24;
    FUN_0003665c(auStack_44,DAT_00036358,uVar5,0xd,*(undefined1 *)(iVar4 + 0x3b4),0,
                 (int)*(short *)(iVar4 + 0x3b6),*(undefined1 *)(iVar4 + 0x3b8),
                 *(undefined1 *)(iVar4 + 0x3e0));
    FUN_00035140(local_24,iVar1,local_20,uVar5);
    FUN_00039a50(*(undefined2 *)(*local_24 + 2),auStack_44);
    return;
  }
  uVar3 = FUN_0003b6a2(puVar2[2]);
  FUN_00035a48(local_24,local_20,iVar1 + 0x14,*(char *)(iVar1 + 0x2c) - *(char *)(iVar1 + 0x2d),
               DAT_00036368,uVar3,0);
  return;
}

