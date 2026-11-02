// rea decompile_all
// name: FUN_000f7dec
// address: 0xf7dec
// body: available
// range: 0xf7dec-0xf80bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xf80a4 to 0x10e834 FUN_0010e834 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000f7dec(int param_1,uint *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  
  if (0x13 < (int)(param_3 - *param_2)) {
    FUN_000f2acc(param_1);
    *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)*param_2;
    *param_2 = *param_2 + 2;
    iVar2 = FUN_000ea040(param_1 + 0x28,param_2,param_3);
    if (iVar2 == 0) {
      return 0;
    }
    bVar1 = *(byte *)(param_1 + 0x24) & 7;
    if ((bVar1 == 1 || bVar1 == 2) &&
       (iVar2 = FUN_000ea040(param_1 + 0x34,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    puVar3 = (undefined4 *)(*param_2 + 3 & 0xfffffffc);
    *param_2 = (uint)puVar3;
    uVar7 = *(ushort *)(param_1 + 0x24) & 0xff8;
    if (uVar7 != 8) {
      if (uVar7 == 0x10) {
        if (param_3 - (int)puVar3 < 0x1a) {
          return 0;
        }
        uVar6 = puVar3[1];
        *(undefined4 *)(param_1 + 0x48) = *puVar3;
        *(undefined4 *)(param_1 + 0x4c) = uVar6;
        uVar5 = *param_2;
        puVar3 = (undefined4 *)(uVar5 + 8);
        *param_2 = (uint)puVar3;
        uVar6 = *(undefined4 *)(uVar5 + 0xc);
        *(undefined4 *)(param_1 + 0x50) = *puVar3;
        *(undefined4 *)(param_1 + 0x54) = uVar6;
        uVar5 = *param_2;
        puVar3 = (undefined4 *)(uVar5 + 8);
        *param_2 = (uint)puVar3;
        uVar6 = *(undefined4 *)(uVar5 + 0xc);
        *(undefined4 *)(param_1 + 0x58) = *puVar3;
        *(undefined4 *)(param_1 + 0x5c) = uVar6;
        uVar5 = *param_2;
        *param_2 = uVar5 + 8;
        *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(uVar5 + 8);
        *param_2 = *param_2 + 2;
      }
      else if ((uVar7 == 0x18) || (uVar7 == 0x20)) {
        if (param_3 - (int)puVar3 < 0x1c) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x4c) = *puVar3;
        uVar5 = *param_2;
        *param_2 = uVar5 + 4;
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(uVar5 + 4);
        uVar5 = *param_2;
        *param_2 = uVar5 + 4;
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(uVar5 + 4);
        uVar5 = *param_2;
        *param_2 = uVar5 + 4;
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(uVar5 + 4);
        uVar5 = *param_2;
        *param_2 = uVar5 + 4;
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(uVar5 + 4);
        uVar5 = *param_2;
        *param_2 = uVar5 + 4;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(uVar5 + 4);
        uVar5 = *param_2;
        *param_2 = uVar5 + 4;
        *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(uVar5 + 4);
        uVar5 = *param_2;
        *param_2 = uVar5 + 2;
        *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(uVar5 + 2);
        *param_2 = *param_2 + 2;
      }
      uVar6 = FUN_0010e834(param_1 + 0x68,param_2,param_3);
      return uVar6;
    }
    if (0xf < param_3 - (int)puVar3) {
      *(undefined4 *)(param_1 + 0x50) = *puVar3;
      uVar5 = *param_2;
      *param_2 = uVar5 + 4;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(uVar5 + 4);
      uVar5 = *param_2;
      *param_2 = uVar5 + 4;
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(uVar5 + 4);
      uVar5 = *param_2;
      *param_2 = uVar5 + 2;
      *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(uVar5 + 2);
      uVar5 = *param_2;
      *param_2 = uVar5 + 2;
      *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(uVar5 + 2);
      uVar5 = *param_2;
      *param_2 = uVar5 + 2;
      *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)(uVar5 + 2);
      *param_2 = *param_2 + 2;
      iVar2 = FUN_0010e834(param_1 + 0x68,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      puVar4 = (undefined2 *)(*param_2 + 1 & 0xfffffffe);
      *param_2 = (uint)puVar4;
      if (1 < param_3 - (int)puVar4) {
        *(undefined2 *)(param_1 + 0x58) = *puVar4;
        *param_2 = *param_2 + 2;
        return 1;
      }
      return 1;
    }
  }
  return 0;
}

