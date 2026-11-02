// rea decompile_all
// name: FUN_000d05d8
// address: 0xd05d8
// body: available
// range: 0xd05d8-0xd082f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d05d8(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined1 auStack_78 [16];
  int *local_68;
  undefined4 local_5c;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined1 auStack_38 [12];
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_000cf680(param_1,1);
  local_5c = FUN_000b9aac();
  FUN_00159f54(auStack_78,local_5c);
  piVar3 = DAT_000d0830;
  uVar8 = 0;
  piVar7 = (int *)*local_68;
  if (piVar7 != local_68) {
    do {
      iVar4 = FUN_00159c48(local_5c,piVar7[2]);
      uVar1 = *(undefined1 *)(iVar4 + 0x34);
      uVar2 = *(undefined1 *)(iVar4 + 0x35);
      FUN_00156bf8(&local_3c,iVar4);
      FUN_0018e28c(local_3c,auStack_38);
      FUN_001da44c(&local_3c);
      uVar5 = FUN_001569ec(iVar4);
      FUN_001569a8(&local_48,iVar4);
      FUN_00156b08(&local_44,iVar4);
      FUN_00156a48(&local_40,iVar4);
      FUN_00156910(&local_4c,iVar4);
      (**(code **)(**(int **)(param_1 + 0x118) + 100))
                (*(int **)(param_1 + 0x118),local_28,uVar8,uVar1,uVar2,auStack_38,uVar5,&local_48,
                 &local_44,&local_40,&local_4c);
      if (local_4c != piVar3 + 3) {
        piVar6 = local_4c + -3;
        iVar4 = *piVar6;
        if ((iVar4 == -1) || ((piVar6 != piVar3 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
          FUN_0010fa20(local_4c + -3,local_4c[-2] + 0xe,0);
        }
      }
      if (local_40 != piVar3 + 3) {
        piVar6 = local_40 + -3;
        iVar4 = *piVar6;
        if ((iVar4 == -1) || ((piVar6 != piVar3 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
          FUN_0010fa20(local_40 + -3,local_40[-2] + 0xe,0);
        }
      }
      if (local_44 != piVar3 + 3) {
        piVar6 = local_44 + -3;
        iVar4 = *piVar6;
        if ((iVar4 == -1) || ((piVar6 != piVar3 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
          FUN_0010fa20(local_44 + -3,local_44[-2] + 0xe,0);
        }
      }
      if (local_48 != piVar3 + 3) {
        piVar6 = local_48 + -3;
        iVar4 = *piVar6;
        if ((iVar4 == -1) || ((piVar6 != piVar3 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
          FUN_0010fa20(local_48 + -3,local_48[-2] + 0xe,0);
        }
      }
      piVar7 = (int *)*piVar7;
      uVar8 = uVar8 + 1 & 0xfffeffff;
    } while (piVar7 != local_68);
  }
  (**(code **)(**(int **)(param_1 + 0x118) + 0x68))(*(int **)(param_1 + 0x118),local_28);
  FUN_001dd150(auStack_78);
  return;
}

