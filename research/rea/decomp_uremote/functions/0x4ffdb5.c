// rea decompile_all
// name: FUN_004ffdb5
// address: 0x4ffdb5
// body: available
// range: 0x4ffdb5-0x50008d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ffdb5(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *in_EDX;
  undefined4 *unaff_EBX;
  int *local_80;
  undefined4 *local_7c;
  int *local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60 [32];
  undefined1 local_40 [12];
  undefined1 auStack_34 [4];
  undefined1 local_30 [28];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9503;
  local_14 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xffffff70;
  ExceptionList = &local_14;
  FUN_00474f97(local_30);
  bVar1 = *(byte *)((int)unaff_EBX + 0x2b);
  cVar2 = FUN_00500c0f(uVar3);
  if (cVar2 != '\0') {
    uVar3 = FUN_005b3fb0();
    uVar4 = FUN_005b3fb0();
    if ((unaff_EBX[0x13] == 0) || (((uVar4 | uVar3) & 0xe0) == 0)) {
      local_80 = (int *)((int)(uVar4 + 0x80) >> 8);
      if (in_EDX != (int *)0x0) {
        (**(code **)(*in_EDX + 0x44))();
        ExceptionList = local_14;
        return;
      }
      FUN_0047e371();
      local_68 = FUN_0047e366();
      local_70 = (int)(uVar3 + 0x80) >> 8;
      FUN_004fc3b0();
      puVar5 = (undefined4 *)FUN_004a4c72(local_40);
      local_70 = *puVar5;
      local_6c = puVar5[1];
      local_68._0_4_ = puVar5[2];
      local_68._4_4_ = puVar5[3];
      if ((int)local_68 < 1) {
        ExceptionList = local_14;
        return;
      }
      if (local_68._4_4_ < 1) {
        ExceptionList = local_14;
        return;
      }
      local_74 = FUN_005af82d(0x28);
      local_c = 0;
      if (local_74 == 0) {
        local_7c = (undefined4 *)0x0;
      }
      else {
        local_7c = (undefined4 *)FUN_005002aa(local_74);
      }
      if (local_7c != (undefined4 *)0x0) {
        local_7c[1] = local_7c[1] + 1;
      }
      local_c = 1;
      (**(code **)(*(int *)*unaff_EBX + 8))(&local_78,&local_7c);
      local_c = CONCAT31(local_c._1_3_,3);
      if (local_7c != (undefined4 *)0x0) {
        piVar6 = local_7c + 1;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*local_7c)(1);
        }
      }
      if (local_78 != (int *)0x0) {
        (**(code **)(*local_78 + 0x44))();
      }
      local_c = 0xffffffff;
      if (local_78 == (int *)0x0) {
        ExceptionList = local_14;
        return;
      }
      piVar6 = local_78 + 1;
      *piVar6 = *piVar6 + -1;
      if (*piVar6 != 0) {
        ExceptionList = local_14;
        return;
      }
      (**(code **)*local_78)(1);
      ExceptionList = local_14;
      return;
    }
  }
  cVar2 = FUN_0047753a();
  if (cVar2 == '\0') {
    if (in_EDX == (int *)0x0) {
      FUN_0047888f();
      local_c = 4;
      FUN_0047e37c();
      FUN_004a966f();
      (**(code **)(*(int *)*unaff_EBX + 4))(&local_80);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,5);
      (**(code **)(*(int *)(uint)bVar1 + 0x18))(&local_7c,local_60,auStack_34);
      FUN_004a7c57();
      if (local_78 != (int *)0x0) {
        piVar6 = local_78 + 1;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*local_78)(1);
        }
      }
      if (local_80 != (int *)0x0) {
        (**(code **)(*local_80 + 0x40))();
      }
      local_c = CONCAT31(local_c._1_3_,4);
      if (local_80 != (int *)0x0) {
        piVar6 = local_80 + 1;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
          (**(code **)*local_80)(1);
        }
      }
      FUN_004f7994();
    }
    else {
      (**(code **)(*in_EDX + 0x40))();
    }
  }
  ExceptionList = local_14;
  return;
}

