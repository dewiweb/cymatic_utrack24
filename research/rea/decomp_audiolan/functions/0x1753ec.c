// rea decompile_all
// name: FUN_001753ec
// address: 0x1753ec
// body: available
// range: 0x1753ec-0x17555b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_001753ec(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *local_54 [2];
  int local_4c;
  undefined1 auStack_48 [16];
  int local_38;
  uint local_34;
  undefined1 auStack_30 [12];
  undefined4 uStack_24;
  int *local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  *param_2 = 0;
  if ((int)param_4 < 0) {
    return 0xfffffffe;
  }
  uStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  FUN_000027f4(auStack_30,10,&DAT_0017555c);
  iVar1 = FUN_00003318(param_3,0x3a);
  if (((iVar1 != 0) || (iVar1 = FUN_00003318(param_3,0x2e), iVar1 == 0)) ||
     (local_4c = FUN_0018e274(param_3), local_4c == -1)) {
    iVar1 = FUN_00190cc0(param_3);
    if (iVar1 == 0) {
      return 0xfffffffa;
    }
    iVar5 = 0;
    puVar8 = (undefined4 *)**(undefined4 **)(iVar1 + 0x10);
    iVar6 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      uVar4 = (param_4 & 0xffff) >> 8 | (param_4 & 0xff) << 8;
      iVar2 = 0;
      do {
        iVar3 = FUN_0017eb28(1,0x30);
        if (iVar3 == 0) break;
        if (iVar5 == 0) {
          iVar5 = iVar3;
        }
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x1c) = iVar3;
        }
        *(undefined4 *)(iVar3 + 4) = 2;
        if (param_5 == 0x11) {
          *(undefined4 *)(iVar3 + 8) = 2;
        }
        else {
          *(undefined4 *)(iVar3 + 8) = 1;
        }
        *(undefined4 *)(iVar3 + 0x10) = 0x10;
        *(int *)(iVar3 + 0x14) = iVar3 + 0x20;
        *(undefined4 *)(iVar3 + 0x24) = *puVar8;
        iVar6 = iVar6 + 1;
        *(char *)(iVar3 + 0x21) = (char)*(undefined4 *)(iVar1 + 8);
        *(short *)(iVar3 + 0x22) = (short)uVar4;
        puVar8 = *(undefined4 **)(*(int *)(iVar1 + 0x10) + iVar6 * 4);
        iVar2 = iVar3;
      } while (puVar8 != (undefined4 *)0x0);
    }
    *local_20 = iVar5;
    return 0;
  }
  local_54[0] = &local_4c;
  uVar9 = 2;
  local_54[1] = (int *)0x0;
  FUN_000027f4(auStack_48,0x10,&DAT_00175560,param_3,auStack_48,0,2,4);
  local_38 = param_5;
  iVar1 = 0;
  iVar5 = 0;
  if (local_54[0] != (int *)0x0) {
    local_34 = (param_4 & 0xffff) >> 8 | (param_4 & 0xff) << 8;
    iVar6 = 0;
    piVar7 = local_54[0];
    do {
      iVar2 = FUN_0017eb28(1,0x30);
      if (iVar2 == 0) break;
      if (iVar1 == 0) {
        iVar1 = iVar2;
      }
      if (iVar6 != 0) {
        *(int *)(iVar6 + 0x1c) = iVar2;
      }
      *(undefined4 *)(iVar2 + 4) = 2;
      if (local_38 == 0x11) {
        *(undefined4 *)(iVar2 + 8) = 2;
      }
      else {
        *(undefined4 *)(iVar2 + 8) = 1;
      }
      *(undefined4 *)(iVar2 + 0x10) = 0x10;
      *(int *)(iVar2 + 0x14) = iVar2 + 0x20;
      *(int *)(iVar2 + 0x24) = *piVar7;
      iVar5 = iVar5 + 1;
      *(char *)(iVar2 + 0x21) = (char)uVar9;
      *(short *)(iVar2 + 0x22) = (short)local_34;
      piVar7 = local_54[iVar5];
      iVar6 = iVar2;
    } while (piVar7 != (int *)0x0);
  }
  *local_20 = iVar1;
  return 0;
}

