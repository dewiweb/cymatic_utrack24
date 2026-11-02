// rea decompile_all
// name: FUN_001847b4
// address: 0x1847b4
// body: available
// range: 0x184560-0x18472b inclusive
// range: 0x1847b4-0x1848d3 inclusive
// range: 0x19f67c-0x19f6ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x184728 to 0x184310 FUN_00184310 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001847b4(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_18 [8];
  
  iVar2 = *param_1;
  uVar4 = *DAT_001848d4;
  if (*(char *)(param_2 + 0x36) != '\0') {
    if (*(char *)(param_2 + 0x30) == '\x01') {
      *(undefined2 *)(iVar2 + 500) = *(undefined2 *)(param_2 + 0x32);
      *(undefined2 *)(*param_1 + 0x200) = 0;
      FUN_00171a80(*param_1 + 0x1f8,param_2 + 0x18);
      FUN_00171ae8(*param_1 + 0x204);
      FUN_00171a80(*param_1 + 0x20c,param_2 + 0x28);
      *(undefined1 *)(*param_1 + 0x214) = 3;
    }
    else {
      if (*(char *)(param_2 + 0x30) != '\x02') goto LAB_001847f8;
      *(undefined2 *)(iVar2 + 500) = *(undefined2 *)(param_2 + 0x32);
      *(undefined2 *)(*param_1 + 0x200) = *(undefined2 *)(param_2 + 0x34);
      FUN_00171a80(*param_1 + 0x1f8,param_2 + 0x18);
      FUN_00171a80(*param_1 + 0x204,param_2 + 0x20);
      FUN_00171a80(*param_1 + 0x20c,param_2 + 0x28);
      *(undefined1 *)(*param_1 + 0x214) = 4;
    }
    if (*(byte *)(*param_1 + 0x214) < 3) {
      return;
    }
    piVar5 = (int *)param_1[3];
    if ((int *)param_1[3] != (int *)0x0) {
LAB_0018458c:
      piVar1 = piVar5;
      uVar4 = FUN_001beccc(*param_1 + 0x20c);
      (**(code **)(*piVar1 + 0x10c))(piVar1,0x104,uVar4);
      piVar3 = *(int **)(*param_1 + 0x1e4);
      if ((piVar3 != piVar1) &&
         (piVar3 = (int *)(uint)*(ushort *)(*param_1 + 500),
         (int *)(uint)*(ushort *)(piVar1 + 0x10) != piVar3)) {
        FUN_002068a4(param_1 + 1,piVar1 + 0x10);
        *(undefined2 *)(piVar1 + 0x10) = *(undefined2 *)(*param_1 + 500);
        if (*(char *)(*param_1 + 0x214) == '\x04') {
          *(undefined2 *)((int)piVar1 + 0x42) = *(undefined2 *)(*param_1 + 0x200);
          iVar2 = FUN_001bed34(piVar1 + 0x10);
          if (iVar2 != 0) {
            FUN_00171a80(piVar1 + 0x14,*param_1 + 0x204);
          }
        }
        iVar2 = FUN_001beb84(*param_1 + 0x180);
        if ((iVar2 != 0) && (iVar2 = FUN_001bed34(piVar1 + 0x10), iVar2 != 0)) {
          piVar5 = (int *)*param_1;
          (**(code **)(*piVar1 + 0x100))(auStack_18,piVar1,1);
          uVar4 = FUN_001beccc(auStack_18);
          (**(code **)(*piVar5 + 0x3c))(piVar5,uVar4);
          FUN_00171ea4(auStack_18);
        }
        uVar7 = FUN_0020665c(param_1 + 1,piVar1);
        piVar3 = (int *)((ulonglong)uVar7 >> 0x20);
        if ((int)uVar7 == 0) {
          FUN_0019faac(*param_1);
          goto LAB_001846f8;
        }
      }
      if (piVar1 == (int *)0x0) goto LAB_001846f8;
      piVar5 = (int *)piVar1[0x44];
      bVar6 = piVar5 == (int *)0x0;
      if (bVar6) {
        piVar5 = (int *)piVar1[0x45];
      }
      if (bVar6 && piVar5 == (int *)0x0) {
        while( true ) {
          piVar1 = (int *)piVar1[0x42];
          if (piVar1 != (int *)0x0) {
            piVar3 = (int *)piVar1[0x45];
          }
          piVar5 = piVar3;
          if (piVar1 != (int *)0x0 && piVar3 != (int *)0x0) break;
          if (piVar1 == (int *)0x0) goto LAB_001846f8;
        }
      }
      goto LAB_0018458c;
    }
LAB_001846f8:
    iVar2 = *param_1;
    if (*(char *)(iVar2 + 0x214) == '\x05') {
      *(undefined1 *)(iVar2 + 0x214) = 3;
      return;
    }
    *(undefined1 *)(iVar2 + 0x1c4) = 2;
    FUN_00184310(param_1);
    return;
  }
LAB_001847f8:
  *(undefined1 *)(iVar2 + 0x214) = 2;
  FUN_00171828(*param_1 + 0x1f8,uVar4);
  param_1 = (int *)*param_1;
  FUN_0019457c(param_1 + 0x21f,1,*(int *)(*param_1 + -0xc) + (int)param_1,0x12);
  return;
}

