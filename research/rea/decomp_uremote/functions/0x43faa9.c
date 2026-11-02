// rea decompile_all
// name: FUN_0043faa9
// address: 0x43faa9
// body: available
// range: 0x43faa9-0x43ffa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043faa9(undefined1 **param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 **ppuStack_90;
  int *piStack_8c;
  int *piStack_88;
  uint uStack_84;
  int local_6c;
  int *local_68;
  int *piStack_64;
  int *piStack_60;
  float local_5c [10];
  undefined1 auStack_34 [20];
  void *pvStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e0f39;
  local_14 = ExceptionList;
  uStack_84 = DAT_00955fd4 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_14;
  piStack_88 = (int *)0x43fadc;
  iVar3 = FUN_0044bfc5();
  local_5c[0] = (float)*(int *)(iVar3 + 0xc);
  piStack_88 = (int *)0x43faec;
  FUN_00476041();
  piStack_88 = (int *)0x43faf5;
  FUN_00476041();
  piStack_88 = (int *)0x43fafc;
  cVar1 = FUN_004c3153();
  if (cVar1 == '\0') {
    piStack_88 = (int *)0x43fb5f;
    FUN_0044bfc5();
  }
  else if (in_ECX[0x25] == 0) {
    piStack_88 = (int *)0x43fb19;
    FUN_004d076d();
    piStack_88 = (int *)0x1;
    ppuStack_90 = (undefined1 **)0x43fb21;
    FUN_004c321c();
  }
  else if (in_ECX[0x25] == 1) {
    piStack_88 = (int *)0x43fb4b;
    FUN_004d076d();
  }
  else {
    piStack_88 = (int *)0x43fb58;
    FUN_004d076d();
  }
  piStack_88 = (int *)0x43fb70;
  FUN_004d076d();
  piStack_88 = (int *)param_1;
  piStack_8c = (int *)0x43fb7e;
  cVar1 = (**(code **)(*in_ECX + 0xb8))();
  ppuStack_90 = (undefined1 **)0x43fb88;
  cVar2 = FUN_004c32c9();
  if (((cVar2 != '\0') && (cVar1 == '\0')) && ((char)in_ECX[0x4b] == '\0')) {
    piStack_8c = (int *)0x43fbab;
    FUN_004d076d();
    piStack_8c = (int *)0x43fbba;
    FUN_004d076d();
  }
  iVar3 = in_ECX[0x5c];
  if (iVar3 == 1) {
LAB_0043fbdb:
    piStack_8c = (int *)0x3f4ccccd;
    ppuStack_90 = (undefined1 **)&local_68;
LAB_0043fbe5:
    FUN_0047620f();
  }
  else {
    if (iVar3 == 2) {
LAB_0043fc67:
      piStack_8c = (int *)0x3ecccccd;
      ppuStack_90 = (undefined1 **)&piStack_64;
      goto LAB_0043fbe5;
    }
    if (iVar3 != 3) {
      if (iVar3 != 4) {
        if (iVar3 != 5) goto LAB_0043fbfe;
        goto LAB_0043fbdb;
      }
      goto LAB_0043fc67;
    }
  }
  piStack_8c = (int *)0x43fbfe;
  FUN_004d076d();
LAB_0043fbfe:
  piStack_8c = (int *)0x43fc07;
  cVar1 = FUN_004761fc();
  if (cVar1 == '\0') {
    piStack_64 = (int *)&piStack_8c;
    if ((char)in_ECX[0x46] == '\0') {
      ppuStack_90 = (undefined1 **)0x43fc7b;
      FUN_004d076d();
      ppuStack_90 = (undefined1 **)0x43fc82;
      FUN_0047d23a();
    }
    else {
      ppuStack_90 = (undefined1 **)0x43fc20;
      piStack_64 = (int *)&piStack_8c;
      FUN_004d076d();
      ppuStack_90 = (undefined1 **)0x43fc27;
      FUN_0047cda7();
      piStack_8c = (int *)0x43fc2c;
      iVar3 = FUN_0044bfc5();
      piStack_8c = (int *)(float)*(int *)(iVar3 + 0x14);
      ppuStack_90 = (undefined1 **)local_5c;
      FUN_004c2047();
      ppuStack_90 = (undefined1 **)0x43fc4d;
      FUN_00439b17();
      ppuStack_90 = (undefined1 **)0x43fc58;
      ppuStack_90 = (undefined1 **)FUN_0043bc2d();
      FUN_0047d575();
    }
  }
  piStack_64 = (int *)&piStack_8c;
  ppuStack_90 = (undefined1 **)0x43fc92;
  FUN_004d076d();
  ppuStack_90 = (undefined1 **)0x43fc99;
  FUN_0047cda7();
  piStack_8c = (int *)0x43fca4;
  local_6c = FUN_005b3fb0();
  piStack_8c = (int *)0x43fcb5;
  cVar1 = FUN_00478a60();
  if (cVar1 == '\0') {
    piStack_8c = (int *)0x43fcc8;
    iVar3 = FUN_005b3fb0();
    ppuStack_90 = (undefined1 **)(float)iVar3;
    puVar8 = auStack_34;
    piStack_8c = (int *)(((float)in_ECX[7] - (float)in_ECX[0x49]) * 0.5);
    local_68 = (int *)ppuStack_90;
    piStack_64 = piStack_8c;
    if ((float)in_ECX[0x34] == 0.0) {
      FUN_0047745f(in_ECX[0x49],puVar8);
      piStack_8c = (int *)FUN_0047713c(puVar8);
      ppuStack_90 = (undefined1 **)(in_ECX + 0x2c);
      FUN_0047d2ae();
    }
    else {
      FUN_0047745f(in_ECX[0x49],puVar8);
      piStack_8c = (int *)FUN_0047713c(puVar8);
      ppuStack_90 = (undefined1 **)in_ECX[0x34];
      ppuStack_90 = (undefined1 **)FUN_0047badf();
      FUN_0047d2d0(in_ECX + 0x2c);
    }
    piStack_8c = (int *)0x43fd91;
    cVar1 = FUN_00478a60();
    if (cVar1 == '\0') {
      piStack_8c = in_ECX + 0x3d;
      piStack_64 = (int *)&piStack_8c;
      ppuStack_90 = (undefined1 **)0x43fdab;
      FUN_004d076d();
      ppuStack_90 = (undefined1 **)0x43fdb2;
      FUN_0047cda7();
      puVar8 = auStack_34;
      piStack_8c = (int *)(((float)in_ECX[7] - (float)in_ECX[0x49]) * 0.5);
      ppuStack_90 = (undefined1 **)local_68;
      piStack_64 = piStack_8c;
      FUN_0047745f(in_ECX[0x49],puVar8);
      piStack_8c = (int *)FUN_0047713c(puVar8);
      ppuStack_90 = (undefined1 **)(in_ECX + 0x35);
      FUN_0047d2ae();
      ppuStack_90 = (undefined1 **)0x43fe15;
      piStack_64 = (int *)&piStack_8c;
      FUN_004d076d();
      ppuStack_90 = (undefined1 **)0x43fe1c;
      FUN_0047cda7();
      if ((float)in_ECX[0x3e] != 0.0) {
        puVar8 = auStack_34;
        piStack_8c = (int *)(((float)in_ECX[7] - (float)in_ECX[0x49]) * 0.5);
        ppuStack_90 = (undefined1 **)local_68;
        piStack_64 = piStack_8c;
        FUN_0047745f(in_ECX[0x49],puVar8);
        piStack_8c = (int *)FUN_0047713c(puVar8);
        ppuStack_90 = (undefined1 **)in_ECX[0x3e];
        ppuStack_90 = (undefined1 **)FUN_0047badf();
        FUN_0047d2d0(in_ECX + 0x35);
      }
    }
    piStack_8c = (int *)0x43fea7;
    local_6c = FUN_005b3fb0();
  }
  if (*(char *)in_ECX[0x41] != '\0') {
    piStack_8c = in_ECX + 0x3f;
    ppuStack_90 = (undefined1 **)0x43fec8;
    FUN_0047ceaa();
    piStack_8c = (int *)0x43fed3;
    cVar1 = FUN_0044031a();
    if (cVar1 == '\0') {
      piStack_8c = (int *)0x1;
      piStack_60 = (int *)&ppuStack_90;
      ppuStack_90 = (undefined1 **)in_ECX[0x42];
      FUN_0047d02d(param_1,in_ECX + 0x41,local_6c,0,in_ECX[6],in_ECX[7]);
    }
    else {
      piStack_8c = (int *)0x43ff0a;
      FUN_0047dafe();
      puStack_10 = (undefined1 *)0x0;
      piStack_8c = (int *)in_ECX[7];
      ppuStack_90 = (undefined1 **)0x43ff1e;
      ppuStack_90 = (undefined1 **)FUN_005b3fb0();
      FUN_0047ccbf(0);
      piStack_8c = (int *)0x0;
      piStack_64 = (int *)&ppuStack_90;
      ppuStack_90 = (undefined1 **)0x21;
      iVar3 = in_ECX[7];
      uVar7 = 10000;
      uVar6 = 0;
      iVar4 = FUN_004402fb(0,10000,iVar3);
      FUN_0047d02d(param_1,in_ECX + 0x41,iVar4 + local_6c,uVar6,uVar7,iVar3);
      puStack_10 = (undefined1 *)0xffffffff;
      piStack_8c = (int *)0x43ff6b;
      FUN_0047db0c();
    }
  }
  iVar3 = *in_ECX;
  piStack_8c = (int *)0x43ff78;
  fVar5 = (float10)FUN_00440330();
  piStack_8c = (int *)(float)(fVar5 + (float10)local_6c);
  ppuStack_90 = param_1;
  piStack_60 = piStack_8c;
  (**(code **)(iVar3 + 0xbc))();
  ExceptionList = pvStack_20;
  return;
}

