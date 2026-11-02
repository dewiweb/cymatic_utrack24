// rea decompile_all
// name: FUN_0009a074
// address: 0x9a074
// body: available
// range: 0x9a074-0x9a28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0009a074(int param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  undefined4 auStack_58 [4];
  undefined1 uStack_46;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_1c;
  undefined1 auStack_14 [4];
  
  do {
    iVar3 = thunk_EXT_FUN_004002f0(param_1 + 0x54,auStack_14,0);
  } while (iVar3 == 0);
  if (*(int *)(param_1 + 0x218) != 0) {
    FUN_0005f2d8(param_1);
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  if (*(int *)(*param_2 + -4) == 0) {
    return 8;
  }
  iVar3 = FUN_0005f168(param_1,param_2,param_1 + 0x218);
  if (iVar3 == 0) {
    FUN_00002898(s_U__ERROR__Could_not_open_the_Mid_0009a295 + 3,*param_2);
    return 2;
  }
  FUN_000d6f54(auStack_58,param_1 + 0x44,*(undefined4 *)(param_1 + 0x40),param_2);
  piVar4 = (int *)FUN_000cbaf0();
  iVar3 = (**(code **)(*piVar4 + 8))(piVar4,auStack_58,0xffffffff);
  uVar2 = DAT_0009a290;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x954) = uStack_40;
    auStack_58[0] = uVar2;
    FUN_001eecc8(uStack_1c);
    FUN_00232190(auStack_44);
  }
  else {
    FUN_00002898(_DAT_0009a294,uStack_46);
    auStack_58[0] = uVar2;
    FUN_001eecc8(uStack_1c);
    FUN_00232190(auStack_44);
  }
  iVar3 = FUN_00099650(param_1,param_1 + 0x228,0xe,1);
  if (iVar3 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x230);
    *(ushort *)(param_1 + 0x230) = uVar1 >> 8 | uVar1 << 8;
    uVar1 = *(ushort *)(param_1 + 0x232);
    *(ushort *)(param_1 + 0x232) = uVar1 >> 8 | uVar1 << 8;
    uVar1 = *(ushort *)(param_1 + 0x234);
    *(ushort *)(param_1 + 0x234) = uVar1 >> 8 | uVar1 << 8;
    uVar5 = *(uint *)(param_1 + 0x22c);
    *(uint *)(param_1 + 0x22c) =
         uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8 | uVar5 >> 0x18 | uVar5 << 0x18;
    iVar3 = FUN_00003928(param_1 + 0x228,&DAT_0009a2fc,4);
    bVar6 = iVar3 == 0;
    if (bVar6) {
      iVar3 = *(int *)(param_1 + 0x22c);
    }
    if (bVar6 && iVar3 == 6) {
      if (*(ushort *)(param_1 + 0x230) < 2) {
        if (*(ushort *)(param_1 + 0x232) < 0x21) {
          return 0;
        }
        FUN_00002898(DAT_0009a30c);
      }
      else {
        FUN_00002898(DAT_0009a308);
      }
      return 3;
    }
    FUN_00002898(DAT_0009a304);
    return 3;
  }
  FUN_00002898(s_ERROR__MidiFileDecoder__parseMid_0009a2c4);
  return iVar3;
}

