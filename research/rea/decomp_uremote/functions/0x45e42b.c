// rea decompile_all
// name: FUN_0045e42b
// address: 0x45e42b
// body: available
// range: 0x45e42b-0x45e624 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045e42b(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined2 uVar2;
  char cVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint in_ECX;
  int in_stack_0000001c;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  *(undefined4 *)(in_ECX + 0x114) = 0;
  sVar1 = *(short *)(param_3 + 4);
  if (sVar1 == -0xff5) {
    *(int *)(in_ECX + 0x134) = in_stack_0000001c;
    if (in_stack_0000001c != 0) {
      (*(code *)**(undefined4 **)
                  (*(int *)(*(int *)(in_stack_0000001c + 4) + 8) + 4 + in_stack_0000001c))();
    }
    FUN_0045ed90();
    cVar3 = FUN_00448866();
    if (cVar3 == '\0') {
      _local_c = CONCAT22(*(undefined2 *)(in_ECX + 0x3d0),2);
      uVar5 = 0xd008;
    }
    else {
      _local_c = CONCAT22(*(undefined2 *)(in_ECX + 0x3cc),2);
      uVar5 = 0xf00a;
    }
  }
  else if (sVar1 == -0x2ff8) {
    *(int *)(in_ECX + 0x13c) = in_stack_0000001c;
    if (in_stack_0000001c != 0) {
      (*(code *)**(undefined4 **)
                  (*(int *)(*(int *)(in_stack_0000001c + 4) + 8) + 4 + in_stack_0000001c))();
    }
    FUN_0045ee3a();
    _local_c = CONCAT22(*(undefined2 *)(in_ECX + 0x3cc),2);
    uVar5 = 0xf00a;
  }
  else {
    if (sVar1 == -0xff6) {
      *(int *)(in_ECX + 0x138) = in_stack_0000001c;
      if (in_stack_0000001c != 0) {
        (*(code *)**(undefined4 **)
                    (*(int *)(*(int *)(in_stack_0000001c + 4) + 8) + 4 + in_stack_0000001c))();
      }
      FUN_0045ede5();
      uVar2 = *(undefined2 *)(in_ECX + 0x3d2);
      *(undefined1 *)(in_ECX + 0x118) = 1;
      uVar5 = 0xc003;
    }
    else {
      if (sVar1 == -0x3ffe) {
        *(undefined1 *)(in_ECX + 0x14c) = 0;
        *(int *)(in_ECX + 0x140) = in_stack_0000001c;
LAB_0045e600:
        if (in_stack_0000001c != 0) {
          (*(code *)**(undefined4 **)
                      (*(int *)(*(int *)(in_stack_0000001c + 4) + 8) + 4 + in_stack_0000001c))();
        }
        FUN_0045ee8d(1,1);
        return;
      }
      if (sVar1 != -0x3ffd) {
        if (sVar1 != -0x3ffc) {
          return;
        }
        *(int *)(in_ECX + 0x148) = in_stack_0000001c;
        goto LAB_0045e600;
      }
      *(undefined1 *)(in_ECX + 0x14c) = 1;
      *(int *)(in_ECX + 0x144) = in_stack_0000001c;
      if (in_stack_0000001c != 0) {
        (*(code *)**(undefined4 **)
                    (*(int *)(*(int *)(in_stack_0000001c + 4) + 8) + 4 + in_stack_0000001c))();
      }
      uVar2 = *(undefined2 *)(in_ECX + 0x3d2);
      uVar5 = 0xc004;
    }
    _local_c = CONCAT22(uVar2,2);
  }
  local_8 = (uint)uVar5;
  uVar4 = (**(code **)(**(int **)(in_ECX + 0x110) + 0xac))
                    (5,&DAT_0095c888,0xffff,&local_c,-(uint)(in_ECX != 0x20) & in_ECX,0);
  *(undefined4 *)(in_ECX + 0x114) = uVar4;
  return;
}

