// rea decompile_all
// name: FUN_006cc880
// address: 0x6cc880
// body: available
// range: 0x6cc880-0x6cc953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cc880(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007265f6;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar2 = DAT_00c8a678;
  do {
    if (piVar2 == in_ECX) {
      bVar4 = 1;
LAB_006cc8c3:
      if ((*(byte *)((int)in_ECX + 0x69) >> 5 & 1) != bVar4) {
        *(byte *)((int)in_ECX + 0x69) = *(byte *)((int)in_ECX + 0x69) & 0xdf | bVar4 << 5;
        (**(code **)(*in_ECX + 0x80))(param_1,uVar3);
        if (*param_2 == 0) {
          ExceptionList = local_10;
          return;
        }
        if (*(int *)(*param_2 + 8) == 0) {
          ExceptionList = local_10;
          return;
        }
      }
      if (in_ECX[3] != 0) {
        param_2 = (int *)FUN_0040de70(in_ECX[3]);
        if (param_2 != (undefined4 *)0x0) {
          LOCK();
          param_2[1] = param_2[1] + 1;
          UNLOCK();
        }
        local_8 = 0;
        FUN_006cc880(param_1,&param_2);
        if (param_2 != (undefined4 *)0x0) {
          LOCK();
          piVar2 = param_2 + 1;
          iVar1 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            (**(code **)*param_2)(1);
          }
        }
      }
      ExceptionList = local_10;
      return;
    }
    if (piVar2 == (int *)0x0) {
      bVar4 = 0;
      goto LAB_006cc8c3;
    }
    piVar2 = (int *)piVar2[3];
  } while( true );
}

