// rea decompile_all
// name: FUN_001913a4
// address: 0x1913a4
// body: available
// range: 0x1913a4-0x19156f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001913a4(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_4 == 0) {
    if (param_1[2] != 0) {
      param_1[1] = 0;
      FUN_001c6a64();
      param_1[2] = 0;
    }
    iVar1 = FUN_0018de64(*param_1 + 0x80);
    iVar2 = FUN_0018de64(*param_1 + 0x88);
    iVar3 = iVar1 + iVar2;
    param_1[1] = iVar3;
    if (iVar3 != 0) {
      iVar3 = FUN_001c6a94(iVar3,DAT_00191570);
      param_1[2] = iVar3;
      if (iVar3 != 0) {
        FUN_0018ddd8(*param_1 + 0x80,iVar3,iVar1);
        FUN_0018ddd8(*param_1 + 0x88,param_1[2] + iVar1,iVar2);
      }
    }
  }
  if (param_5 < 9) {
LAB_00191514:
    (**(code **)(*(int *)*param_1 + 0x1ec))((int *)*param_1,param_2);
  }
  else {
    uVar4 = param_1[1];
    uVar7 = param_5 - 8 & 0xffff;
    uVar6 = param_3 + uVar7;
    if (param_3 < uVar4) {
      if (uVar4 <= uVar6) {
        uVar7 = uVar4 - param_3 & 0xffff;
      }
      puVar5 = (undefined1 *)FUN_001c6a94(uVar7 + 8,DAT_00191570);
      if (puVar5 == (undefined1 *)0x0) goto LAB_00191514;
      *puVar5 = 0x44;
      puVar5[1] = 0x49;
      puVar5[2] = 0x53;
      puVar5[3] = 0x44;
      *(int *)(puVar5 + 4) = param_1[1];
      FUN_000039e0(puVar5 + 8,param_1[2] + param_3,uVar7);
      (**(code **)(*(int *)*param_1 + 0x1f0))((int *)*param_1,param_2,0x40,param_3 + uVar7);
      FUN_001c6a64(puVar5);
    }
    else {
      (**(code **)(*(int *)*param_1 + 0x1ec))((int *)*param_1,param_2);
    }
    if (uVar6 < uVar4) {
      return;
    }
  }
  if (param_1[2] != 0) {
    param_1[1] = 0;
    FUN_001c6a64();
    param_1[2] = 0;
    return;
  }
  return;
}

