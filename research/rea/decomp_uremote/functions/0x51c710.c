// rea decompile_all
// name: FUN_0051c710
// address: 0x51c710
// body: available
// range: 0x51c710-0x51c8c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0051c710(undefined4 param_1,short param_2,char param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int local_28;
  undefined1 local_18 [12];
  int local_c;
  int local_8;
  
  cVar2 = (*(code *)**(undefined4 **)(in_ECX + -0xd8 + *(int *)(*(int *)(in_ECX + -0xd8) + 0xc)))();
  if (cVar2 == '\0') {
    local_28 = 0;
  }
  else if (param_4 == 0) {
    local_28 = 0;
  }
  else if (param_2 == 0) {
    local_28 = 0;
  }
  else {
    local_c = FUN_00520890(param_1);
    if (local_c == 0) {
      local_28 = 0;
    }
    else if ((((*(short *)(in_ECX + -0x94) == *(short *)(local_c + 0x48)) &&
              (*(short *)(in_ECX + -0x92) == *(short *)(local_c + 0x4a))) &&
             (*(int *)(in_ECX + -0x90) == *(int *)(local_c + 0x4c))) &&
            (*(short *)(local_c + 0x50) == 1)) {
      FUN_0054f6b0();
      iVar1 = *(int *)(in_ECX + -0xd4);
      FUN_0052dce0(local_18);
      local_8 = FUN_00553f70(in_ECX + -0x94,local_18,(-(uint)(param_3 != '\0') & 3) + 0x33c,
                             *(undefined2 *)(local_c + 0x52),param_2,0,0,&DAT_0095c898,&DAT_0095c8a8
                             ,param_4,in_ECX + -0x100,iVar1 + 0x3f8,param_5);
      if (local_8 != 0) {
        FUN_00544360();
      }
      FUN_0054f6f0();
      if (local_8 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = local_8 + 0xa0 + *(int *)(*(int *)(local_8 + 0xa0) + 4);
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}

