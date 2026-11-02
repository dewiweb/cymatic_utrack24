// rea decompile_all
// name: FUN_0019e338
// address: 0x19e338
// body: available
// range: 0x19e338-0x19e4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0019e338(int *param_1,undefined4 *param_2,uint *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_40 [16];
  undefined1 auStack_30 [20];
  
  FUN_001727f0(local_40);
  puVar3 = (undefined1 *)*param_2;
  if ((*(byte *)((int)param_1 + 0xf6) & 0x10) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x14);
    uVar5 = (uint)uVar1;
    if (*param_3 < uVar5 * 0xc + 7) {
      *param_3 = 0;
      return 0;
    }
    iVar2 = uVar5 * 0xc + 4;
    *puVar3 = 0x80;
    puVar3[1] = (char)iVar2;
    puVar3[2] = (char)((uint)iVar2 >> 8);
    puVar3[3] = 2;
    uVar6 = 0;
    puVar3[4] = *(undefined1 *)((int)param_1 + 0xf2);
    puVar3[5] = (char)((ushort)*(undefined2 *)((int)param_1 + 0xf2) >> 8);
    puVar4 = puVar3 + 7;
    puVar3[6] = (char)uVar1;
    *param_3 = *param_3 - 7;
    if (uVar5 != 0) {
      do {
        (**(code **)(*param_1 + 0x144))(auStack_30,param_1,uVar6 & 0xffff);
        FUN_00172810(local_40,auStack_30);
        uVar6 = uVar6 + 1;
        *puVar4 = (char)local_40._0_2_;
        puVar4[1] = SUB21(local_40._0_2_,1);
        puVar4[2] = (char)local_40._2_2_;
        puVar4[3] = SUB21(local_40._2_2_,1);
        puVar4[4] = (char)local_40._4_4_;
        puVar4[5] = SUB41(local_40._4_4_,1);
        puVar4[6] = SUB41(local_40._4_4_,2);
        puVar4[7] = SUB41(local_40._4_4_,3);
        puVar4[8] = (char)local_40._8_2_;
        puVar4[9] = SUB21(local_40._8_2_,1);
        puVar3 = puVar4 + 0xb;
        puVar4[10] = (char)local_40._12_2_;
        puVar4 = puVar4 + 0xc;
        *puVar3 = SUB21(local_40._12_2_,1);
        *param_2 = puVar4;
        *param_3 = *param_3 - 0xc;
      } while (uVar6 < uVar5);
    }
  }
  return 1;
}

