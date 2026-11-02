// rea decompile_all
// name: FUN_00194c6c
// address: 0x194c6c
// body: available
// range: 0x194c6c-0x194fb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_00194c6c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_68;
  int *piStack_64;
  ushort auStack_60 [2];
  int aiStack_5c [3];
  undefined2 uStack_50;
  int aiStack_48 [2];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [16];
  
  cVar1 = (char)param_2[0x37];
  if (cVar1 == '\0') {
    if (param_2[0x38] == 0) {
      return;
    }
    uVar2 = FUN_0019f118();
    (**(code **)(**(int **)(param_1 + 4) + 0x18c))(*(int **)(param_1 + 4),1);
    FUN_0018adec(*(undefined4 *)(param_1 + 4),1,0);
    aiStack_5c[0] = 0;
    auStack_60[0] = 0;
    aiStack_48[0]._0_2_ = 0;
    iVar3 = FUN_0018b17c(*(undefined4 *)(param_1 + 4),aiStack_5c,auStack_60,aiStack_48);
    if (iVar3 != 0) {
      FUN_0019f188(aiStack_5c + 1,0x40);
      FUN_0019f024(aiStack_5c + 1,auStack_60[0]);
      iVar3 = 0;
      if (auStack_60[0] != 0) {
        do {
          FUN_0019ec8c(aiStack_5c + 1,aiStack_5c[0] + iVar3 * 0x18);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)auStack_60[0]);
      }
      (**(code **)(*param_2 + 0x6c))(auStack_40,param_2);
      (**(code **)(**(int **)(param_1 + 4) + 0xd4))(auStack_30);
      piStack_64 = aiStack_5c + 1;
      uStack_68 = 0x82;
      FUN_0019a864(**(undefined4 **)(*(int *)(param_1 + 4) + 0x7c),auStack_30,auStack_40,uVar2);
      FUN_0019f1d8(aiStack_5c + 1);
    }
    if (aiStack_5c[0] == 0) {
      return;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        if (param_2[0x38] == 0) {
          return;
        }
        FUN_0019f118();
        uVar2 = FUN_0019f118(param_2[0x38]);
        iVar3 = FUN_001727f0(&uStack_68);
        FUN_00172810(iVar3,DAT_00194fb4);
        *(undefined2 *)(iVar3 + 0x10) = 0;
        *(undefined2 *)(iVar3 + 0x12) = 0;
        *(undefined2 *)(iVar3 + 0x14) = 0;
        *(undefined2 *)(iVar3 + 0x16) = 0;
        *(undefined2 *)(iVar3 + 0x18) = 0;
        *(undefined2 *)(iVar3 + 0x1a) = 0;
        *(undefined2 *)(iVar3 + 0x1c) = 0;
        FUN_0019ebb4(param_2[0x38],&uStack_68);
        FUN_001887f0(*(undefined4 *)(param_1 + 4),1,uVar2,&uStack_68);
        return;
      }
      if (cVar1 != '\x03') {
        return;
      }
      if (param_2[0x38] == 0) {
        return;
      }
      FUN_0019f118();
      uStack_68 = 0;
      piStack_64 = (int *)0x0;
      auStack_60[0] = 0;
      FUN_0019eaf4(param_2[0x38],&uStack_68);
      FUN_001727f0(aiStack_5c + 1);
      FUN_0019ea78(param_2[0x38],aiStack_5c + 1);
      FUN_0018996c(*(undefined4 *)(param_1 + 4),&uStack_68,aiStack_5c + 1);
      return;
    }
    if (param_2[0x38] == 0) {
      return;
    }
    uVar2 = FUN_0019f118();
    aiStack_5c[1] = 0;
    aiStack_5c[2] = 0;
    uStack_50 = 0;
    FUN_0019eaf4(param_2[0x38],aiStack_5c + 1);
    aiStack_5c[0] = 0;
    auStack_60[0] = 0;
    iVar3 = FUN_0018aed4(*(undefined4 *)(param_1 + 4),aiStack_5c + 1,aiStack_5c,auStack_60);
    if (iVar3 != 0) {
      FUN_0019f188(aiStack_48,0x40);
      FUN_0019f024(aiStack_48,auStack_60[0]);
      iVar3 = 0;
      if (auStack_60[0] != 0) {
        do {
          FUN_0019edc0(aiStack_48,aiStack_5c[0] + iVar3 * 10);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)auStack_60[0]);
      }
      (**(code **)(*param_2 + 0x6c))(auStack_38,param_2);
      (**(code **)(**(int **)(param_1 + 4) + 0xd4))(auStack_28);
      piStack_64 = aiStack_48;
      uStack_68 = 0x83;
      FUN_0019a864(**(undefined4 **)(*(int *)(param_1 + 4) + 0x7c),auStack_28,auStack_38,uVar2);
      FUN_0019f1d8(aiStack_48);
    }
    if (aiStack_5c[0] == 0) {
      return;
    }
  }
  FUN_001c6a64();
  return;
}

