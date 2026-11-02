// rea decompile_all
// name: FUN_00072188
// address: 0x72188
// body: available
// range: 0x72188-0x7234f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00072188(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_38 [4];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 auStack_30 [20];
  
  if (param_4 == 0) {
    puVar1 = (undefined4 *)FUN_0008b800(auStack_30);
    *puVar1 = DAT_00072350;
    uVar2 = FUN_0008cf78();
    iVar3 = FUN_0008ce54(uVar2,DAT_00072354,auStack_30);
    if (iVar3 == 0) {
      FUN_0008b818(auStack_30);
      return 0xffffff38;
    }
    iVar3 = FUN_0016deb0(param_2,DAT_0007235c,DAT_00072358,0xffffffff);
    if (iVar3 == 0) {
      FUN_0008b818(auStack_30);
      return 0xfffffffb;
    }
    uVar4 = 0;
    if (*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18) >> 2 != 0) {
      do {
        FUN_000b481c(param_3,uVar4);
        iVar5 = *(int *)(*(int *)(iVar3 + 0x18) + uVar4 * 4);
        FUN_0007b98c(auStack_38);
        iVar5 = *(int *)(iVar5 + 8);
        local_34 = *(undefined1 *)(iVar5 + 0x30);
        local_33 = *(undefined1 *)(iVar5 + 0x31);
        local_32 = *(undefined1 *)(iVar5 + 0x32);
        local_31 = *(undefined1 *)(iVar5 + 0x33);
        iVar5 = FUN_00156078(auStack_38);
        if (iVar5 == 5) {
          FUN_000dc578(*param_5,uVar4,1);
          FUN_000dcf38(*param_5,1);
        }
        else if (iVar5 == 6 || iVar5 == 7) {
          FUN_000dc578(*param_5,uVar4,2);
          FUN_000dcf38(*param_5,1);
        }
        else {
          FUN_000dc578(*param_5,uVar4,0);
        }
        iVar5 = FUN_00046630(*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0);
        uVar2 = FUN_0004669c(*(undefined4 *)(*(int *)(param_2 + 4) + 0x60),0);
        iVar5 = FUN_00003a1c(iVar5 * DAT_00072360,uVar2);
        FUN_000dcd10(*param_5,uVar4,iVar5 + -3);
        FUN_0007b9a4(auStack_38);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)(*(int *)(param_3 + 0x1c) - *(int *)(param_3 + 0x18) >> 2));
    }
    FUN_0008b818(auStack_30);
  }
  return 0;
}

