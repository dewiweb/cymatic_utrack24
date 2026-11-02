// rea decompile_all
// name: FUN_0055d240
// address: 0x55d240
// body: available
// range: 0x55d240-0x55d4f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055d240(int param_1,int param_2)

{
  ushort uVar1;
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  undefined1 local_84 [16];
  undefined1 local_74 [16];
  undefined1 local_64 [16];
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  if (param_2 != 0) {
    if (*(short *)(param_1 + 0x18) == 0x307) {
      FUN_00503c60(param_1 + 0x1c);
      FUN_00568810(local_14);
      FUN_00503c60(param_1 + 0x1c);
      (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x30))
                (local_24);
    }
    else if ((*(uint *)(param_2 + 0x70) & 0x1000000) == 0) {
      uVar1 = *(ushort *)(param_1 + 0x18);
      if (uVar1 < 0x382) {
        if (uVar1 == 0x381) {
          FUN_00503c60(param_1 + 0x1c);
          (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x2c))
                    (local_74);
        }
        else if (uVar1 < 0x302) {
          if (uVar1 == 0x301) {
            FUN_00503c60(param_1 + 0x1c);
            FUN_005686f0(local_34);
          }
          else if (uVar1 == 0x104) {
            FUN_005684c0();
          }
          else if (uVar1 == 0x184) {
            (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x28)
            )();
          }
        }
        else if (uVar1 == 0x303) {
          FUN_00503c60(param_1 + 0x1c);
          FUN_00568810(local_64);
        }
      }
      else if (uVar1 == 899) {
        FUN_00503c60(param_1 + 0x1c);
        (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x30))
                  (local_a4);
      }
      else if (uVar1 == 0x702) {
        FUN_00503c60(param_1 + 0x2c);
        FUN_00503c60(param_1 + 0x1c);
        FUN_005688b0(local_54,local_44);
      }
      else if (uVar1 == 0x782) {
        FUN_00503c60(param_1 + 0x2c);
        FUN_00503c60(param_1 + 0x1c);
        FUN_00568af0(local_94,local_84);
      }
    }
  }
  return;
}

