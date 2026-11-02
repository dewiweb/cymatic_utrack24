// rea decompile_all
// name: FUN_00146718
// address: 0x146718
// body: available
// range: 0x146718-0x1468d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x146768 to 0xfbaac FUN_000fbaac (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00146718(int param_1,int *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined8 uVar5;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [16];
  
  if ((*(ushort *)(param_2 + 0x37) & 0x8000) == 0) {
    FUN_00146670(auStack_50,0x40);
    uVar2 = DAT_001468d4;
    if ((short)param_2[0x37] == 1) {
      FUN_0014650c(auStack_50,1);
      FUN_0014650c(auStack_50,0);
      FUN_0014650c(auStack_50,0);
      FUN_0014650c(auStack_50,0);
      iVar3 = FUN_0017bfc0();
      FUN_0014657c(auStack_50,1000,iVar3 * 1000,0);
      uVar5 = FUN_00117fd8(*(int *)(param_1 + 0x6c) + 0x220);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      FUN_0014657c(auStack_50,uVar4,(int)uVar5,uVar4);
      FUN_0014657c(auStack_50,extraout_r1,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4a8),
                   *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4ac));
      FUN_0014657c(auStack_50,extraout_r1_00,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4b0),
                   *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4b4));
      FUN_0014657c(auStack_50,extraout_r1_01,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4b8),
                   *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4bc));
      FUN_0014657c(auStack_50,extraout_r1_02,*(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4c0),
                   *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x4c4));
      FUN_0014657c(auStack_50,extraout_r1_03,*(undefined4 *)(param_1 + 8),
                   *(undefined4 *)(param_1 + 0xc));
      FUN_0014657c(auStack_50,extraout_r1_04,*(undefined4 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x14));
      FUN_0014657c(auStack_50,extraout_r1_05,*(undefined4 *)(param_1 + 0x18),
                   *(undefined4 *)(param_1 + 0x1c));
      FUN_0014657c(auStack_50,extraout_r1_06,*(undefined4 *)(param_1 + 0x20),
                   *(undefined4 *)(param_1 + 0x24));
      uVar1 = *(undefined2 *)((int)param_2 + 0xde);
      (**(code **)(*param_2 + 0x6c))(auStack_40,param_2);
      uVar4 = FUN_0010f5fc(auStack_24,auStack_40);
      FUN_00116ec0(auStack_30,*(int *)(param_1 + 0x6c) + 0x1e0);
      FUN_0013e498(*(undefined4 *)(param_1 + 0x6c),auStack_30,uVar4,uVar2,uVar1,auStack_50);
    }
    FUN_001466c0(auStack_50);
    return;
  }
  iVar3 = FUN_000e97a8(*(int *)(param_1 + 0x6c) + 0x484,*(undefined2 *)((int)param_2 + 0xde));
  if (iVar3 != 0) {
    FUN_0013cc94(iVar3,param_2);
    FUN_000fbaac(iVar3);
    return;
  }
  return;
}

