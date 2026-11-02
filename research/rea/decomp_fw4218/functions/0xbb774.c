// rea decompile_all
// name: FUN_000bb774
// address: 0xbb774
// body: available
// range: 0xbb774-0xbb97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000bb774(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined4 local_18;
  
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  FUN_002399e8(param_2 + 0x5c);
  if (*(char *)(param_2 + 4) == '\x02') {
    FUN_00110e9c(param_2,param_3,auStack_1c,auStack_20,auStack_24,auStack_28);
    FUN_000c0690(param_1,param_2,*(undefined2 *)(param_3 + 10));
    *(undefined4 *)(param_2 + 0x84) = 0;
    if (2 < *(ushort *)(param_2 + 0x1a)) {
      FUN_00002898(s_ERROR__Total_Channels_in_wave_fi_000bb97c,*(undefined2 *)(param_2 + 0x1a));
      *(undefined4 *)(param_2 + 0x84) = 0xf;
    }
    if ((((*(int *)(param_2 + 0x1c) != 0xac44) &&
         (*(undefined1 **)(param_2 + 0x1c) != &LAB_0000bb80)) &&
        (*(undefined1 **)(param_2 + 0x1c) != &LAB_00015888)) && (*(int *)(param_2 + 0x1c) != 96000))
    {
      FUN_00002898(s_ERROR__Sample_Rate_is__d_000bb9a8,*(undefined4 *)(param_2 + 0x1c));
      *(undefined4 *)(param_2 + 0x84) = 0xe;
    }
    if (((*(short *)(param_2 + 0x26) != 8) && (*(short *)(param_2 + 0x26) != 0x10)) &&
       (*(short *)(param_2 + 0x26) != 0x18)) {
      FUN_00002898(s_ERROR__Bit_Depth_is__d_000bb9c4,*(undefined2 *)(param_2 + 0x26));
      *(undefined4 *)(param_2 + 0x84) = 0xd;
    }
    if (*(int *)(param_2 + 0x84) == 0) {
      uVar1 = FUN_00006604(local_18,*(int *)(param_3 + 0xc) *
                                    ((int)(uint)*(ushort *)(param_3 + 0x16) >> 3) *
                                    (uint)*(ushort *)(param_3 + 10));
      *(undefined4 *)(param_2 + 0x80) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x80);
    }
    else {
      *(undefined4 *)(param_2 + 0x80) = 0;
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x80);
    }
  }
  else if (*(char *)(param_2 + 4) == '\x04') {
    uVar1 = FUN_000be0ac(param_1,param_2);
    *(undefined4 *)(param_2 + 0x84) = uVar1;
    if (*(int *)(param_2 + 0x84) == 0) {
      uVar1 = FUN_00006604(*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x1c));
      *(undefined4 *)(param_2 + 0x50) = uVar1;
      if (*(uint *)(param_2 + 0x50) < *(uint *)(param_2 + 0x4c)) {
        uVar1 = *(undefined4 *)(param_2 + 0x4c);
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x50);
      }
      *(undefined4 *)(param_2 + 0x80) = uVar1;
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x80);
    }
    else {
      *(undefined4 *)(param_2 + 0x80) = 0;
      *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_2 + 0x80);
    }
  }
  FUN_000c0108(param_1,param_2 + 0x40,param_2 + 0x44,param_2 + 0x48);
  return;
}

