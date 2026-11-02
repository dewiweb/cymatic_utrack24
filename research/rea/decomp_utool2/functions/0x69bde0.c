// rea decompile_all
// name: FUN_0069bde0
// address: 0x69bde0
// body: available
// range: 0x69bde0-0x69bee8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069bde0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 *puStack_54;
  undefined1 *puStack_50;
  undefined1 *local_4c;
  undefined4 *puStack_48;
  uint uStack_44;
  undefined1 local_34 [16];
  undefined1 local_24 [20];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072234d;
  local_10 = ExceptionList;
  uStack_44 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(in_ECX + 0x388) + 0x78) == 0) {
    local_4c = (undefined1 *)&puStack_48;
    puStack_50 = (undefined1 *)0x69be2e;
    FUN_006842b0();
    puVar3 = param_1;
    local_4c = (undefined1 *)0x69be38;
    FUN_00684c50();
    puStack_48 = &param_1;
    local_4c = (undefined1 *)0x69be43;
    (**(code **)(*(int *)*puVar3 + 0x6c))();
    local_4c = (undefined1 *)0x69be52;
    puVar4 = (undefined4 *)FUN_00683640();
    local_8 = 0;
    if (*(char *)(puVar3 + 2) != '\0') {
      *(undefined1 *)(puVar3 + 2) = 0;
      puStack_48 = (undefined4 *)0x69be6c;
      (**(code **)(*(int *)*puVar3 + 0x34))();
    }
    local_4c = (undefined1 *)0x69be74;
    puStack_48 = puVar4;
    (**(code **)(*(int *)*puVar3 + 0x68))();
    local_8 = 0xffffffff;
    if (param_1 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = param_1 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        local_4c = (undefined1 *)0x1;
        puStack_50 = (undefined1 *)0x69be98;
        (**(code **)*param_1)();
      }
    }
    local_4c = (undefined1 *)0x1e;
    puStack_50 = local_24;
    puStack_54 = local_34;
    uStack_58 = 0x69bea9;
    FUN_006e6400();
    puStack_54 = (undefined1 *)0x69beb0;
    FUN_0040ddb0();
    local_4c = (undefined1 *)0x1;
    puStack_50 = (undefined1 *)0x24;
    FUN_0040e4d0(auStack_60);
    FUN_006830c0(in_ECX + 0x38c);
  }
  ExceptionList = local_10;
  return;
}

